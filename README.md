# Single Cycle RISC-V Processor Core

This repository contains the SystemVerilog implementation of a single-cycle RISC-V processor core capable of executing instructions with I, R, B, S, J, and U formats. The processor core design adheres to the RISC-V instruction set architecture (ISA) and is intended for educational and academic purposes.

## Overview

The RISC-V processor core is designed to execute instructions in a single clock cycle, providing deterministic performance. It supports the following instruction formats:

- **I-Type Instructions:** Instructions with an immediate operand, typically used for arithmetic and logical operations.
- **R-Type Instructions:** Register-to-register instructions, often used for arithmetic and logical operations.
- **B-Type Instructions:** Branch instructions, facilitating conditional branching based on comparison results.
- **S-Type Instructions:** Store instructions, used for storing data from a register to memory.
- **J-Type Instructions:** Jump instructions, facilitating unconditional jumps to different parts of the program.
- **U-Type Instructions:** Upper immediate instructions, used for loading immediate values into registers.

The processor core architecture includes modules for instruction fetch, instruction decode, execution, memory access, and write-back stages. Each stage is designed to handle a specific aspect of instruction execution, ensuring efficient and accurate operation.

## Features

- **Single Cycle Execution:** Instructions are executed in a single clock cycle, providing deterministic performance.
- **Support for RISC-V ISA:** Implements a wide range of instruction formats, covering most common operations in RISC-V programs.
- **Modular Design:** Processor architecture is modular, allowing for easy understanding, debugging, and modification.
- **Verilator Simulation:** Includes a Makefile for running simulations using the Verilator simulator, enabling fast and efficient testing of the processor core design.

## Simulation

Simulation of the RISC-V processor core can be performed using the Verilator simulator. The provided Makefile automates the compilation and simulation process. To simulate the processor core, follow these steps:

1. Ensure Verilator is installed on your system.
2. Clone this repository to your local machine.
3. Navigate to the repository directory.
4. Run `make build` in the terminal to build the SystemVerilog design.
5. Run `make sim` to start the simulation.
6. View simulation results in the terminal.

## Usage

To use the RISC-V processor core design, instantiate the `Single_Cycle.sv` module in your SystemVerilog project. Connect appropriate inputs and outputs to interface with external memory, peripherals, and control logic as needed.

## Acknowledgments

- This project was inspired by the need for a simple yet functional RISC-V processor core suitable for educational purposes.
- Special thanks to the RISC-V community for providing extensive documentation and resources on RISC-V ISA and microarchitecture.
