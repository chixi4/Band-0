
undefined4 FUN_ram_42013654(uint param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uStack_14;
  
  if (1 < param_1) {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar5 = 9;
    goto LAB_ram_4201366e;
  }
  if (param_2 != (undefined2 *)0x0) {
    (*(code *)&SUB_ram_40010488)(param_2,0,0x1c);
    iVar6 = *(int *)(*(int *)(param_1 * 4 + 0x3c074890) + 0x18);
    if (iVar6 == 0) {
      uVar2 = 8;
LAB_ram_420136b4:
      *param_2 = uVar2;
    }
    else if (iVar6 == 1) {
      uVar2 = 2;
      goto LAB_ram_420136b4;
    }
    iVar6 = FUN_ram_4201401e(param_1,&uStack_14);
    if (iVar6 == 0) {
      uVar4 = param_2[2];
      uVar3 = uVar4 & 0xfffc;
      param_2[2] = uVar3;
      if (uStack_14 != 2) {
        if (uStack_14 < 3) {
          uVar3 = uVar3 | 1;
          if (uStack_14 != 0) goto LAB_ram_420137a2;
          goto LAB_ram_420136e4;
        }
        if (uStack_14 == 3) {
          param_2[2] = uVar4 | 3;
          goto LAB_ram_420136e4;
        }
LAB_ram_42013790:
        puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar5 = 0x58;
        goto LAB_ram_4201366e;
      }
      uVar3 = uVar3 | 2;
LAB_ram_420137a2:
      param_2[2] = uVar3;
LAB_ram_420136e4:
      iVar6 = FUN_ram_42014094(param_1,&uStack_14);
      if (iVar6 == 0) {
        if (uStack_14 != 1) {
          if (uStack_14 != 3) goto LAB_ram_42013790;
          param_2[2] = param_2[2] | 4;
        }
        iVar6 = FUN_ram_4201411c(param_1,&uStack_14);
        if (iVar6 == 0) {
          if (uStack_14 == 2) {
            uVar4 = param_2[2] | 0x10;
LAB_ram_420137ba:
            param_2[2] = uVar4;
          }
          else {
            if (uStack_14 == 3) {
              uVar4 = param_2[2] | 0x30;
              goto LAB_ram_420137ba;
            }
            if (uStack_14 != 0) goto LAB_ram_42013790;
          }
          uStack_14 = 0;
          iVar6 = FUN_ram_42014258(param_1,&uStack_14);
          if (iVar6 == 0) {
            uVar4 = param_2[2];
            param_2[2] = uVar4 | 0x300;
            if (uStack_14 == 0x9600) {
              uStack_14 = 0xf;
              goto LAB_ram_4201377c;
            }
            if (uStack_14 < 0x9601) {
              if (uStack_14 == 300) {
                uStack_14 = 7;
                goto LAB_ram_4201377c;
              }
              if (uStack_14 < 0x12d) {
                if (uStack_14 == 0x6e) {
                  uStack_14 = 3;
                  goto LAB_ram_4201377c;
                }
                if (uStack_14 < 0x6f) {
                  if (uStack_14 == 0x32) {
                    uStack_14 = 1;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x4b) {
                    uStack_14 = 2;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0) goto LAB_ram_4201377c;
                }
                else {
                  if (uStack_14 == 0x96) {
                    uStack_14 = 5;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 200) {
                    uStack_14 = 6;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x86) {
                    uStack_14 = 4;
                    goto LAB_ram_4201377c;
                  }
                }
              }
              else {
                if (uStack_14 == 0x960) {
                  uStack_14 = 0xb;
                  goto LAB_ram_4201377c;
                }
                if (uStack_14 < 0x961) {
                  if (uStack_14 == 0x4b0) {
                    uStack_14 = 9;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x708) {
                    uStack_14 = 10;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 600) {
                    uStack_14 = 8;
                    goto LAB_ram_4201377c;
                  }
                }
                else {
                  if (uStack_14 == 0x2580) {
                    uStack_14 = 0xd;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x4b00) {
                    uStack_14 = 0xe;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x12c0) {
                    uStack_14 = 0xc;
                    goto LAB_ram_4201377c;
                  }
                }
              }
            }
            else {
              if (uStack_14 == 1000000) {
                uStack_14 = 0x17;
                goto LAB_ram_4201377c;
              }
              if (uStack_14 < 0xf4241) {
                if (uStack_14 == 0x70800) {
                  uStack_14 = 0x13;
                  goto LAB_ram_4201377c;
                }
                if (uStack_14 < 0x70801) {
                  if (uStack_14 == 0x1c200) {
                    uStack_14 = 0x11;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x38400) {
                    uStack_14 = 0x12;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0xe100) {
                    uStack_14 = 0x10;
                    goto LAB_ram_4201377c;
                  }
                }
                else {
                  if (uStack_14 == 0x8ca00) {
                    uStack_14 = 0x15;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0xe1000) {
                    uStack_14 = 0x16;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 500000) {
                    uStack_14 = 0x14;
                    goto LAB_ram_4201377c;
                  }
                }
              }
              else {
                if (uStack_14 == 2500000) {
                  uStack_14 = 0x1b;
                  goto LAB_ram_4201377c;
                }
                if (uStack_14 < 0x2625a1) {
                  if (uStack_14 == 1500000) {
                    uStack_14 = 0x19;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 2000000) {
                    uStack_14 = 0x1a;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 0x119400) {
                    uStack_14 = 0x18;
                    goto LAB_ram_4201377c;
                  }
                }
                else {
                  if (uStack_14 == 3500000) {
                    uStack_14 = 0x1d;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 4000000) {
                    uStack_14 = 0x1e;
                    goto LAB_ram_4201377c;
                  }
                  if (uStack_14 == 3000000) {
                    uStack_14 = 0x1c;
                    goto LAB_ram_4201377c;
                  }
                }
              }
            }
            param_2[2] = uVar4 | 0x700;
LAB_ram_4201377c:
            *(uint *)(param_2 + 0xc) = uStack_14;
            *(uint *)(param_2 + 10) = uStack_14;
            return 0;
          }
        }
      }
    }
  }
  puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
  uVar5 = 0x16;
LAB_ram_4201366e:
  *puVar1 = uVar5;
  return 0xffffffff;
}

