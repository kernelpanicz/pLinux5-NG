#include "offsets.h"

/*
 * 13.60 only. Merged: values confirmed by tools/pl5-offsets.c on a live
 * 0x1360 console take precedence over SIG/BYEP values where they differ.
 */
offset_list off_1360 = {
    .IOMMU_SOFTC                              = 0x0,
    .VMSPACE_VM_VMID                          = 0x1E4,          /* auto: live 0x1360 read */
    /* CONFLICT RESOLVED: auto-generated table read 0x1D8 back from the live
     * 13.60 kernel, matching upstream/Byepervisor. The earlier 0x2E8 value
     * and its CR3-based argument were superseded by that measurement. If
     * pmap behaviour is still odd, re-run the CR3 check before changing. */
    .VMSPACE_VM_PMAP                          = 0x1D8,
    .DATA_BASE_GVMSPACE                       = 0x0,
    .ACPIGBL_FACS                             = 0x39C9490,      /* SIG */
    .IDT                                      = 0x3BB4300,      /* SIG + BYEP */
    .COMMON_TSS                               = 0x3BB6FE0,      /* SIG + BYEP */
    .STOPPED_CPUS                             = 0x0,
    .FUN_STOP_CPUS                            = 0x0,
    .FUN_AS_LAPIC_EOI                         = 0x0,
    .FUN_HV_UNMAP_PT_TMR                      = 0x0,
    .FUN_MEMCPY                               = 0x259BE0,       /* SIG */
    .GAD_ADD_RSP_28_POP_RBP_RET               = 0x25213E,       /* BYEP */
    .GAD_IRETQ                                = 0x257B3D,       /* BYEP + TAB */
    .GAD_POP_RAX_RET                          = 0x2912A1,       /* BYEP */
    .GAD_POP_RDI_RET                          = 0x28CE6D,       /* BYEP */
    .GAD_POP_RSI_RET                          = 0x34CB91,       /* BYEP */
    .GAD_POP_RDX_RET                          = 0x2A0F7B,       /* BYEP */
    .GAD_POP_RCX_RET                          = 0x2918B2,       /* BYEP */
    .GAD_POP_RSP_RET                          = 0x291C42,       /* BYEP */
    .GAD_POP_RSP_RET                          = 0x291C42,
    .GAD_WRMSR_RET                            = 0x0,
    .GAD_MOV_QWORD_PTR_RDI_RSI_POP_RBP_RET    = 0x0,
    .HOOK_ACPI_WAKEUP_MACHDEP                 = 0x3913B0,       /* BYEP */
    /* CONFLICT RESOLVED: 0x2D29000 per live-console read (auto) and
     * KERNEL_SYM_DATA_CAVE now matches it exactly. */
    .KERNEL_CODE_CAVE                         = 0x2D29000,
    .FUN_PRINTF                               = 0x4ADD60,       /* HW */
    .FUN_HV_IOMMU_SET_BUFFERS                 = 0x0,
    .FUN_HV_IOMM_WAIT_COMPLETION              = 0x0,
    .FUN_SMP_RENDEZVOUS                       = 0xB03BA0,       /* SIG */
    .FUN_SMP_NO_RENDEVOUS_BARRIER             = 0x0,
    .HV_CODE_CAVE_PA                          = 0x62806F00,     /* HW */
    .HV_HANDLE_VMEXIT_PA                      = 0x6283D800,     /* HW */
    .KERNEL_UART_OVERRIDE                     = 0x0,            /* hard gap */
    .KERNEL_CFI_CHECK                         = 0x44F8C0,       /* SIG */
    .G_VBIOS                                  = 0x3DDB9F0,      /* SIG */
    .FUN_TRANSMITTER_CONTROL                  = 0x0,            /* headless */
    .FUN_MP3_INITIALIZE                       = 0xA13740,       /* SIG */
    .FUN_MP3_INVOKE                           = 0x0,            /* headless */
    .PS5_WIFI_FW_OFFSET                       = 0x0,            /* headless */
    .PS5_WIFI_FW_SIZE                         = 0x0,            /* headless */
    .KERNEL_SYM_DMPML4I                       = 0x3B49294,      /* BYEP */
    .KERNEL_SYM_DMPDPI                        = 0x3B49298,      /* BYEP */
    .KERNEL_SYM_PML4PML4I                     = 0x3B47E4C,      /* BYEP */
    .KERNEL_SYM_SYS_GETUID                    = 0x2A8D60,       /* BYEP */
    .KERNEL_SYM_HV_MP_STARTUP_CALL            = 0xC16EE0,       /* BYEP */
    .KERNEL_SYM_MP_STARTUP_INIT_VECTOR        = 0x269FB8,       /* BYEP */
    /* CONFLICT RESOLVED: 0x3B24FF8 per live-console read. */
    .KERNEL_SYM_PMAP_STORE                    = 0x3B24FF8,
    .KERNEL_SYM_DATA_CAVE                     = 0x2D29000,      /* auto, matches cave above */
    .HV_SYM_HEAP_BASE                         = 0x83028,        /* BYEP, auto agrees */
    .HV_SYM_PCPUS                             = 0x82A60,        /* BYEP, auto agrees */
    .HV_LOADER_PA_REGULAR                     = 0x62800000,     /* HW, auto agrees */
    .HV_LOADER_PA_PRO                         = 0x8E0800000,    /* BYEP, auto agrees */
    .GAD_POP_R8                               = 0xB8CA6D,       /* BYEP */
    .GAD_STORE_RCX_R8                         = 0x474389,       /* BYEP */
    .GAD_OR_RCX_EAX                           = 0x321EA0,       /* BYEP */
    .GAD_SET_DR7                              = 0xA07BA6,       /* BYEP */
    .GAD_ST_RCX_RAX                           = 0x2BB28F,       /* BYEP */
    .GAD_STORE_RDI8_RCX                       = 0x32693F,       /* BYEP */
    .GAD_ST_RCX_RDX                           = 0x82B915,       /* BYEP */
    .GAD_MOV_RAX_RSI                          = 0x8E3A44,       /* BYEP */
    .GAD_MOV_RAX_RDI                          = 0xBECDEA,       /* BYEP */
    .GAD_REP_MOVSB                            = 0x25D027,       /* BYEP */
    .GAD_CLD                                  = 0x30644F,       /* BYEP */
    .GAD_RET_TRAMP                            = 0x2912A2,       /* BYEP */
    .GAD_DBREG_RESUME                         = 0x2529D8,       /* BYEP */
};
