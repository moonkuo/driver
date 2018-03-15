/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    driver and application

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_UMDFdriver,
    0xd26fe8dd,0x960a,0x4729,0xaa,0xe6,0x7a,0x2d,0x56,0x72,0xa9,0x01);
// {d26fe8dd-960a-4729-aae6-7a2d5672a901}
