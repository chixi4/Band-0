
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420453c2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_a3;
  undefined4 extraout_a3;
  undefined4 in_a4;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfebc,0xb8,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x60,4,0x41);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 100,4,0x41);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x68,4,0x41);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x90,0x2a,1);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x78,1,0x28);
            if (iVar1 == 0) {
              iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x7c,2,4);
              if (iVar1 == 0) {
                iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x80,1,4);
                if (iVar1 == 0) {
                  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x84,1,4);
                  if (iVar1 == 0) {
                    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfebc + 0x88,1,4);
                    if (iVar1 == 0) {
                      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                                        (_DAT_ram_3fcdfebc + 0x8c,1,4,extraout_a3,0x1000,
                                         *(code **)(_DAT_ram_3fcdfecc + 0x97c));
                      uVar2 = 0;
                      if (iVar1 != 0) {
                        uVar2 = 0xfffffff4;
                      }
                    }
                    else {
                      uVar2 = 0xfffffff5;
                    }
                  }
                  else {
                    uVar2 = 0xfffffff6;
                  }
                }
                else {
                  uVar2 = 0xfffffff7;
                }
              }
              else {
                uVar2 = 0xfffffff8;
              }
            }
            else {
              uVar2 = 0xfffffff9;
            }
          }
          else {
            uVar2 = 0xfffffffb;
          }
        }
        else {
          uVar2 = 0xfffffffc;
        }
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

