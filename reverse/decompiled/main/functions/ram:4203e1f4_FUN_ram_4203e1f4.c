
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4203e1f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdff6c,0x34,1,param_4,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x97c))
  ;
  if (iVar2 == 0) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff6c + 0x20,0x70,1);
    if (iVar2 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x118))(param_1);
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff6c + 0x1c,0x40,1);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xb14))();
        if (iVar2 == 0) {
          iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff6c + 0x18,2,4);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff6c + 0x14,2,8);
            if (iVar2 == 0) {
              iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff6c + 0x10,1,0x2a);
              if (iVar2 == 0) {
                iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x7e8))();
                if (iVar2 == 0) {
                  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 4))();
                  if (iVar2 == 0) {
                    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 8))();
                    if (iVar2 == 0) {
                      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xc))();
                      if (iVar2 == 0) {
                        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x10))();
                        if (iVar2 == 0) {
                          iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x14))();
                          if (iVar2 == 0) {
                            iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x360))();
                            if (iVar2 == 0) {
                              iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x18))();
                              if (iVar2 == 0) {
                                iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x4d0))();
                                if (iVar2 == 0) {
                                  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3c8))();
                                  if (iVar2 == 0) {
                                    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xac8))();
                                    if (iVar2 == 0) {
                                      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x8a8))();
                                      if (iVar2 == 0) {
                                        iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x598))();
                                        if (iVar2 == 0) {
                                          return 0;
                                        }
                                        uVar1 = 0xffffffec;
                                      }
                                      else {
                                        uVar1 = 0xffffffed;
                                      }
                                    }
                                    else {
                                      uVar1 = 0xffffffee;
                                    }
                                  }
                                  else {
                                    uVar1 = 0xffffffef;
                                  }
                                }
                                else {
                                  uVar1 = 0xfffffff0;
                                }
                              }
                              else {
                                uVar1 = 0xfffffff1;
                              }
                            }
                            else {
                              uVar1 = 0xfffffff2;
                            }
                          }
                          else {
                            uVar1 = 0xfffffff3;
                          }
                        }
                        else {
                          uVar1 = 0xfffffff4;
                        }
                      }
                      else {
                        uVar1 = 0xfffffff5;
                      }
                    }
                    else {
                      uVar1 = 0xfffffff6;
                    }
                  }
                  else {
                    uVar1 = 0xfffffff7;
                  }
                }
                else {
                  uVar1 = 0xfffffff8;
                }
              }
              else {
                uVar1 = 0xfffffff9;
              }
            }
            else {
              uVar1 = 0xfffffffa;
            }
          }
          else {
            uVar1 = 0xfffffffb;
          }
        }
        else {
          uVar1 = 0xfffffffc;
        }
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xaf8))();
  return uVar1;
}

