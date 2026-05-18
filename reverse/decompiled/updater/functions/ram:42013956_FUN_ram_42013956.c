
undefined4 FUN_ram_42013956(uint param_1,int param_2,ushort *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (1 < param_1) {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar5 = 9;
    goto LAB_ram_42013970;
  }
  if (param_3 != (ushort *)0x0) {
    if (param_2 == 1) {
      iVar6 = FUN_ram_420142dc(param_1,0xffffffff);
      if (iVar6 == 0) goto LAB_ram_42013a74;
    }
    else {
      if (param_2 == 2) {
LAB_ram_42013a74:
        param_2 = FUN_ram_4201448c(param_1);
      }
      if (param_2 == 0) {
        iVar6 = 0;
        if ((*param_3 & 8) == 0) {
          iVar6 = ((*param_3 & 2) == 0) + 1;
        }
        *(int *)(*(int *)(param_1 * 4 + 0x3c074890) + 0x18) = iVar6;
        uVar3 = param_3[2] & 3;
        if ((uVar3 != 2) && (uVar3 != 3)) {
          uVar3 = (ushort)(uVar3 == 1);
        }
        iVar6 = FUN_ram_42013fd2(param_1,uVar3);
        if ((iVar6 == 0) &&
           (iVar6 = FUN_ram_42014048(param_1,(-(uint)((param_3[2] & 4) == 0) & 0xfffffffe) + 3),
           iVar6 == 0)) {
          cVar2 = '\0';
          if ((param_3[2] & 0x10) != 0) {
            cVar2 = ((param_3[2] & 0x20) != 0) + '\x02';
          }
          iVar6 = FUN_ram_420140d8(param_1,cVar2);
          if (iVar6 == 0) {
            if ((param_3[2] & 0x300) == 0) {
              return 0;
            }
            uVar4 = *(uint *)(param_3 + 10);
            if (uVar4 == *(uint *)(param_3 + 0xc)) {
              if ((param_3[2] & 0x400) == 0) {
                if (uVar4 == 0xf) {
                  uVar4 = 0x9600;
                }
                else if (uVar4 < 0x10) {
                  if (uVar4 == 7) {
                    uVar4 = 300;
                  }
                  else if (uVar4 < 8) {
                    if (uVar4 == 3) {
                      uVar4 = 0x6e;
                    }
                    else if (uVar4 < 4) {
                      if (uVar4 == 1) {
                        uVar4 = 0x32;
                      }
                      else if (uVar4 == 2) {
                        uVar4 = 0x4b;
                      }
                      else {
                        uVar4 = 0;
                      }
                    }
                    else if (uVar4 == 5) {
                      uVar4 = 0x96;
                    }
                    else if (uVar4 == 6) {
                      uVar4 = 200;
                    }
                    else {
                      uVar4 = 0x86;
                    }
                  }
                  else if (uVar4 == 0xb) {
                    uVar4 = 0x960;
                  }
                  else if (uVar4 < 0xc) {
                    if (uVar4 == 9) {
                      uVar4 = 0x4b0;
                    }
                    else if (uVar4 == 10) {
                      uVar4 = 0x708;
                    }
                    else {
                      uVar4 = 600;
                    }
                  }
                  else if (uVar4 == 0xd) {
                    uVar4 = 0x2580;
                  }
                  else if (uVar4 == 0xe) {
                    uVar4 = 0x4b00;
                  }
                  else {
                    uVar4 = 0x12c0;
                  }
                }
                else if (uVar4 == 0x17) {
                  uVar4 = 1000000;
                }
                else if (uVar4 < 0x18) {
                  if (uVar4 == 0x13) {
                    uVar4 = 0x70800;
                  }
                  else if (uVar4 < 0x14) {
                    if (uVar4 == 0x11) {
                      uVar4 = 0x1c200;
                    }
                    else if (uVar4 == 0x12) {
                      iVar6 = 0x38000;
LAB_ram_42013b18:
                      uVar4 = iVar6 + 0x400;
                    }
                    else {
                      uVar4 = 0xe100;
                    }
                  }
                  else if (uVar4 == 0x15) {
                    uVar4 = 0x8ca00;
                  }
                  else if (uVar4 == 0x16) {
                    uVar4 = 0xe1000;
                  }
                  else {
                    uVar4 = 500000;
                  }
                }
                else if (uVar4 == 0x1b) {
                  uVar4 = 2500000;
                }
                else if (uVar4 < 0x1c) {
                  if (uVar4 == 0x19) {
                    uVar4 = 1500000;
                  }
                  else {
                    if (uVar4 != 0x1a) {
                      iVar6 = 0x119000;
                      goto LAB_ram_42013b18;
                    }
                    uVar4 = 2000000;
                  }
                }
                else if (uVar4 == 0x1d) {
                  uVar4 = 3500000;
                }
                else if (uVar4 == 0x1e) {
                  uVar4 = 4000000;
                }
                else {
                  if (uVar4 != 0x1c) goto LAB_ram_42013986;
                  uVar4 = 3000000;
                }
              }
              iVar6 = FUN_ram_42014160(param_1,uVar4);
              if (iVar6 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_ram_42013986:
  puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
  uVar5 = 0x16;
LAB_ram_42013970:
  *puVar1 = uVar5;
  return 0xffffffff;
}

