# Complete Guide: Creating and Running ASM Files in Keil µVision

This guide will walk you through the process of creating, building, and debugging an Assembly (ASM) file in Keil µVision IDE step by step.

## Prerequisites
- Keil µVision IDE installed on your computer
- Basic understanding of ARM Assembly language

## Step-by-Step Instructions

### Step 1: Create a New Project
1. **Open Keil µVision software**
2. **Navigate to Project menu** in the top navigation bar
3. **Click on "New µVision Project"** from the dropdown menu

![Step 1 - New Project](MC/Images/Asset1/screenshot_01.png)

### Step 2: Name Your Project
1. **Enter project name** - Type any name for your project (e.g., "ARITHMETIC23")
2. **Choose location** - Select where you want to save your project
3. **Click "Save"** - Don't change any other settings at this point

![Step 2 - Project Name](MC/Images/Asset1/screenshot_02.png)

### Step 3: Select Target Device
1. **Search for device** - A device selection popup will appear
2. **Type "LPC1768"** in the search field
3. **Select "LPC1768"** from the search results (NXP vendor)
4. **Click "OK"** to confirm your selection

![Step 3 - Device Selection](MC/Images/Asset1/screenshot_03.png)

### Step 4: Configure Run-Time Environment
1. **Review components** - Another popup will show software components
2. **Don't change anything** - Keep all default settings as they are
3. **Click "OK"** to proceed

![Step 4 - Runtime Environment](MC/Images/Asset1/screenshot_04.png)

### Step 5: Expand Project Structure
1. **Locate Project sidebar** - Find the project panel on the left side
2. **Find your target** - Look for "Target_1" in the project tree
3. **Click the plus sign** next to "Target_1" to expand it

![Step 5 - Project Structure](MC/Images/Asset1/screenshot_05.png)

### Step 6: Expand Source Group
1. **Locate "Source Group 1"** - You'll see it under Target_1
2. **Click to expand** if not already expanded

![Step 6 - Source Group](MC/Images/Asset1/screenshot_06.png)

### Step 7: Add New Assembly File
1. **Right-click on "Source Group 1"**
2. **Select "Add New Item to Group 'Source Group 1'..."** from the context menu

![Step 7 - Add New Item](MC/Images/Asset1/screenshot_07.png)

### Step 8: Create ASM File
1. **Select file type** - In the popup, click on "Asm File (.s)" option
2. **Enter filename** - Type your desired filename (e.g., "arithmetic27")
3. **Verify location** - Make sure the location path is correct
4. **Click "Add"** to create the file

![Step 8 - ASM File Creation](MC/Images/Asset1/screenshot_08.png)

### Step 9: Write Your Assembly Code
1. **Code editor opens** - A new tab will open with your ASM file
2. **Write your assembly code** - Enter your ARM assembly instructions
3. **Save the file** - Press `Ctrl+S` to save your work

![Step 9 - Code Editor](MC/Images/Asset1/screenshot_09.png)

### Step 10: Configure Target Options
1. **Click the magic wand icon** - Find the small magic wand symbol in the toolbar
2. **This opens Target Options** - Project configuration window will appear

![Step 10 - Target Options](MC/Images/Asset1/screenshot_10.png)

### Step 11: Configure Debug Settings
1. **Click on "Debug" tab** - Located at the top of the Target Options window
2. **Select "Use Simulator"** - Choose the simulator option
3. **Click "Settings"** if you need to configure simulator options
4. **Click "OK"** to save debug settings

![Step 11 - Debug Settings](MC/Images/Asset1/screenshot_11.png)

![Step 11 - Simulator Settings](MC/Images/Asset1/screenshot_12.png)

![Step 11 - Simulator Configuration](MC/Images/Asset1/screenshot_13.png)

### Step 12: Build the Project
1. **Right-click on your project** - In the Project sidebar, right-click on your project name
2. **Select "Build Target"** - Or press `F7` as a shortcut
3. **Check build output** - Look at the Build Output window at the bottom

![Step 12 - Build Target](MC/Images/Asset1/screenshot_14.png)

### Step 13: Verify Build Success
1. **Check for errors** - In the Build Output window
2. **Look for "0 Error(s), 0 Warning(s)"** - This indicates successful compilation
3. **Program Size information** - Note the code and data size information

![Step 13 - Build Success](MC/Images/Asset1/screenshot_15.png)

### Step 14: Start Debug Session
1. **Go to Debug menu** - In the top navigation bar
2. **Click "Start/Stop Debug Session"** - Or press `Ctrl+F5`
3. **Debug mode activates** - The interface will change to debug view

![Step 14 - Debug Menu](MC/Images/Asset1/screenshot_16.png)

### Step 15: Execute Code Step by Step
1. **Use Step controls** - Find the step execution buttons in the toolbar
2. **Click "Step" button** - The second arrow icon for line-by-line execution
3. **Press F11** - Alternative keyboard shortcut for stepping

![Step 15 - Debug Interface](MC/Images/Asset1/screenshot_17.png)

### Step 16: Monitor Register Changes
1. **Open Registers window** - If not already visible
2. **Watch register values** - Observe how values change as you step through code
3. **Core registers** - Monitor R0-R15 and other ARM registers
4. **Track your variables** - See how your assembly instructions affect register contents

![Step 16 - Register Values](MC/Images/Asset1/screenshot_18.png)

## Debugging Tips

### Register Window
- **Core registers** - R0 through R15, including SP (Stack Pointer) and PC (Program Counter)
- **Status registers** - CPSR and other status flags
- **Real-time updates** - Values update as you step through code

### Step Execution Options
- **Step Into (F11)** - Execute one instruction at a time
- **Step Over (F10)** - Execute function calls as single steps
- **Run (F5)** - Run continuously until breakpoint or completion

### Common Issues and Solutions

1. **Build Errors**
   - Check syntax in your assembly code
   - Ensure proper AREA declarations
   - Verify EXPORT and ENTRY statements

2. **Debug Issues**
   - Make sure simulator is properly configured
   - Check that build was successful before debugging
   - Verify target device selection

3. **Register Not Updating**
   - Ensure you're stepping through code properly
   - Check that instructions are executing (watch PC register)
   - Verify your assembly logic

## Best Practices

1. **Save frequently** - Use `Ctrl+S` regularly while coding
2. **Build often** - Check for errors early and often
3. **Comment your code** - Use `;` for comments in assembly
4. **Use meaningful labels** - Make your code readable
5. **Test incrementally** - Debug small sections at a time

## Conclusion

Following these steps will help you successfully create, build, and debug Assembly files in Keil µVision. The simulator provides an excellent environment for learning ARM assembly programming and understanding how instructions affect processor registers and memory.

Remember to save your work regularly and build frequently to catch errors early in the development process.
