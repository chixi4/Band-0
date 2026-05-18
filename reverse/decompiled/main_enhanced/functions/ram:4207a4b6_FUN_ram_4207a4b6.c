
uint FUN_ram_4207a4b6(void)

{
  uint uVar1;
  byte *unaff_s0;
  int unaff_s1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_s2;
  int *unaff_s3;
  int unaff_s5;
  uint unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
switchD_ram_4207a432_default:
  do {
    unaff_s0 = unaff_s0 + unaff_s0[1] + 2;
    if (unaff_s2 - (int)unaff_s0 < 2) {
      iVar2 = *(int *)(unaff_s11 + 0x28);
      uVar1 = 2;
      if (iVar2 != 0) {
        uVar1 = (*(byte *)(iVar2 + 1) < 0x10 ^ 1) << 1;
        if ((*(int *)(unaff_s11 + 0x2c) != 0) &&
           ((int)(0xf - (uint)*(byte *)(iVar2 + 1)) <
            (int)(uint)*(byte *)(*(int *)(unaff_s11 + 0x2c) + 1))) {
          uVar1 = uVar1 | 4;
        }
      }
      if ((*(int *)(unaff_s11 + 0x24) == 0) || (0x20 < *(byte *)(*(int *)(unaff_s11 + 0x24) + 1))) {
        uVar1 = uVar1 | 8;
      }
      if ((*(int *)(unaff_s11 + 0x20) != 0) && (*(byte *)(*(int *)(unaff_s11 + 0x20) + 1) < 3)) {
        *(undefined4 *)(unaff_s11 + 0x20) = 0;
      }
      pcVar6 = *(char **)(unaff_s11 + 0x44);
      if (pcVar6 != (char *)0x0) {
        bVar3 = 0x1e;
        if (*pcVar6 != -0x23) {
          bVar3 = 0x1a;
        }
        if ((byte)pcVar6[1] < bVar3) {
          *(undefined4 *)(unaff_s11 + 0x44) = 0;
        }
      }
      pcVar6 = *(char **)(unaff_s11 + 0x48);
      if (pcVar6 == (char *)0x0) {
        if (unaff_s5 != 0) goto LAB_ram_4207a728;
        cVar4 = *(char *)(*(int *)(unaff_s10 + 0x24) + 8);
      }
      else {
        bVar3 = 0x1a;
        if (*pcVar6 != -0x23) {
          bVar3 = 0x16;
        }
        if ((byte)pcVar6[1] < bVar3) {
          *(undefined4 *)(unaff_s11 + 0x48) = 0;
        }
        if ((unaff_s5 != 0) || (pcVar6 = *(char **)(unaff_s11 + 0x48), pcVar6 == (char *)0x0))
        goto LAB_ram_4207a728;
        if (*pcVar6 == -0x23) {
          pcVar6 = pcVar6 + 4;
        }
        cVar4 = pcVar6[2];
      }
      *(char *)(unaff_s11 + 4) = cVar4;
LAB_ram_4207a728:
      if ((*(int *)(unaff_s11 + 0x68) != 0) && ((iVar2 == 0 || (0x14 < *(byte *)(iVar2 + 1))))) {
        uVar1 = uVar1 | 0x100;
      }
      iVar2 = FUN_ram_4208b9e8(*(undefined1 *)(unaff_s11 + 4));
      if (iVar2 == 0) {
        FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc278,*(undefined1 *)(unaff_s11 + 4));
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
    uVar1 = (uint)unaff_s0[1];
    if (unaff_s2 - (int)unaff_s0 <= (int)(uVar1 + 1)) {
      return 1;
    }
    uVar5 = (uint)*unaff_s0;
    if (0x32 < uVar5) {
      if (uVar5 == 0x7f) {
        *(byte **)(unaff_s11 + 0x5c) = unaff_s0;
      }
      else if ((char)*unaff_s0 < '\0') {
        if (uVar5 == 0xdd) {
          if (3 < uVar1) {
            iVar2 = *(int *)(unaff_s0 + 2);
            if (iVar2 == 0x1f25000) {
              *(byte **)(unaff_s11 + 0x34) = unaff_s0;
              goto switchD_ram_4207a432_default;
            }
            if ((uVar1 < 6) || (iVar2 != 0x2f25000)) {
              if (iVar2 == 0x4f25000) {
                *(byte **)(unaff_s11 + 0x50) = unaff_s0;
                goto switchD_ram_4207a432_default;
              }
              if (iVar2 == 0x1c9a6f50) {
                *(byte **)(unaff_s11 + 100) = unaff_s0;
                goto switchD_ram_4207a432_default;
              }
            }
            else if ((unaff_s0[6] == 1) || (unaff_s0[6] == 0)) {
              *(byte **)(unaff_s11 + 0x40) = unaff_s0;
              goto switchD_ram_4207a432_default;
            }
          }
          if (*(int *)(unaff_s1 + 0x264) == 0) {
            if (3 < uVar1) {
LAB_ram_4207a562:
              if (*(int *)(unaff_s0 + 2) == 0x334fe18) goto switchD_ram_4207a432_default;
              if (*(int *)(unaff_s0 + 2) == -0x22cb01e8) {
                if (*(code **)(unaff_s1 + 0x98) != (code *)0x0) {
                  (**(code **)(unaff_s1 + 0x98))(in_stack_0000000c);
                }
                goto switchD_ram_4207a432_default;
              }
            }
          }
          else if (3 < uVar1) {
            if (*(int *)(unaff_s0 + 2) != 0x734fe18) goto LAB_ram_4207a562;
            *(undefined1 *)(unaff_s11 + 0x54) = 1;
            FUN_ram_4039c11e(unaff_s11 + 0x78,unaff_s0 + 7,4);
            goto switchD_ram_4207a432_default;
          }
          if ((*(uint *)(*unaff_s3 + 300) & 0x10000000) == 0) {
            if (((3 < uVar1) && ((*(uint *)(unaff_s0 + 2) & unaff_s7) != 0x34fe18)) &&
               (*(code **)(unaff_s1 + 0xc4) != (code *)0x0)) {
              (**(code **)(unaff_s1 + 0xc4))(*(undefined4 *)(unaff_s1 + 200),in_stack_00000008);
            }
          }
          else if (3 < uVar1) {
            if (*(int *)(unaff_s0 + 2) == 0x334c9000) {
              iVar2 = *(int *)(unaff_s11 + 0x44);
            }
            else {
              if (*(int *)(unaff_s0 + 2) != 0x344c9000) goto switchD_ram_4207a432_default;
              iVar2 = *(int *)(unaff_s11 + 0x48);
            }
            if (iVar2 == 0) {
              *(byte **)(unaff_s11 + 0x44) = unaff_s0;
            }
          }
          goto switchD_ram_4207a432_default;
        }
        if (uVar5 == 0xf4) {
          *(byte **)(unaff_s11 + 0x68) = unaff_s0;
        }
      }
      else if (uVar5 == 0x44) {
        *(byte **)(unaff_s11 + 0x38) = unaff_s0;
      }
      else if (uVar5 == 0x4a) {
        *(byte **)(unaff_s11 + 0x58) = unaff_s0;
      }
      else if (uVar5 == 0x3d) {
        *(byte **)(unaff_s11 + 0x48) = unaff_s0;
      }
      goto switchD_ram_4207a432_default;
    }
    if (uVar5 < 0x25) {
      if (uVar5 < 8) {
                    /* WARNING: Could not recover jumptable at 0x4207a432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(uVar5 * 4 + unaff_s9))();
        return uVar1;
      }
    }
    else {
      uVar1 = uVar5 - 0x25 & 0xff;
      if (uVar1 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x4207a42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(uVar1 * 4 + unaff_s8))();
        return uVar1;
      }
    }
  } while( true );
}

