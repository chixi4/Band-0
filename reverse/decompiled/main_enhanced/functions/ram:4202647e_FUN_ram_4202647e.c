
undefined4 FUN_ram_4202647e(uint param_1)

{
  byte *unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  uint unaff_s2;
  int unaff_s3;
  undefined4 in_stack_00000018;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  
  iVar6 = *(int *)(unaff_s3 + -0x490);
  uStack0000001c = 0;
  uStack0000001e = 0;
  puVar5 = (ushort *)(iVar6 + 2);
  iVar1 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(iVar6 + 0x1386) <= iVar1) {
      return 0xe;
    }
    if (param_1 == 0x2a4a) break;
    if (param_1 < 0x2a4b) {
      if (param_1 == 0x2a22) {
        if (puVar5[5] == unaff_s2) {
          if (1 < *unaff_s0) goto LAB_ram_420264d2;
          uVar2 = *(undefined4 *)(unaff_s0 + 4);
          uVar4 = 8;
          puVar3 = (undefined1 *)(iVar1 * 0x750 + 4 + iVar6);
          if (*unaff_s0 != 0) {
            iVar1 = FUN_ram_420263e6(uVar2,8,puVar3,0);
            if ((*(uint *)(*(int *)(unaff_s0 + 8) + 0x10) & 0x10) != 0) {
              FUN_ram_420323fe(**(undefined2 **)(*(int *)(unaff_s0 + 8) + 0x18));
            }
            goto joined_r0x420266ea;
          }
          goto LAB_ram_42026562;
        }
      }
      else if (param_1 < 0x2a23) {
        if (param_1 != 0x2907) {
          if ((param_1 != 0x2908) || (*unaff_s0 != 2)) goto LAB_ram_420264d2;
          iVar1 = FUN_ram_4202640a(**(undefined2 **)(*(int *)(unaff_s0 + 8) + 0xc));
          if (iVar1 == 0) {
            return 10;
          }
          puVar3 = (undefined1 *)&stack0x0000001c;
          uStack0000001c =
               (undefined2)CONCAT21(*(undefined2 *)(iVar1 + 0x101),*(undefined1 *)(iVar1 + 0x102));
          uVar4 = 2;
          goto LAB_ram_42026560;
        }
        if (puVar5[0x39e] == **(ushort **)(*(int *)(unaff_s0 + 8) + 0xc)) {
          if (*unaff_s0 != 2) goto LAB_ram_420264d2;
          iVar1 = iVar1 * 0x750 + 0x740;
          uVar4 = 2;
          goto LAB_ram_4202655e;
        }
      }
      else if (param_1 == 0x2a32) {
        if (puVar5[7] == unaff_s2) {
          uVar4 = 1;
          if (1 < *unaff_s0) goto LAB_ram_420264d2;
          uVar2 = *(undefined4 *)(unaff_s0 + 4);
          puVar3 = (undefined1 *)(iVar6 + iVar1 * 0x750 + 0xe);
          if (*unaff_s0 != 0) goto LAB_ram_420266a0;
          goto LAB_ram_42026562;
        }
      }
      else {
        if (param_1 != 0x2a33) goto LAB_ram_420264d2;
        if (puVar5[0xd] == unaff_s2) {
          if (1 < *unaff_s0) goto LAB_ram_420264d2;
          uVar2 = *(undefined4 *)(unaff_s0 + 4);
          puVar3 = (undefined1 *)(iVar1 * 0x750 + 0x12 + iVar6);
          if (*unaff_s0 != 0) {
            iVar6 = FUN_ram_420263e6(uVar2,8,puVar3,&stack0x0000001e);
            if (iVar6 != 0) {
              return 0x11;
            }
            *(char *)(*(int *)(unaff_s3 + -0x490) + iVar1 * 0x750 + 0x1a) = (char)uStack0000001e;
            goto LAB_ram_42026718;
          }
          uVar4 = (ushort)*(byte *)(iVar1 * 0x750 + iVar6 + 0x1a);
          goto LAB_ram_42026562;
        }
      }
    }
    else {
      if (param_1 == 0x2a4d) {
        puVar3 = (undefined1 *)FUN_ram_4202640a(**(undefined2 **)(*(int *)(unaff_s0 + 8) + 0x18));
        if (puVar3 == (undefined1 *)0x0) {
          return 10;
        }
        if (1 < *unaff_s0) goto LAB_ram_420264d2;
        uVar2 = *(undefined4 *)(unaff_s0 + 4);
        if (*unaff_s0 != 0) {
          iVar1 = FUN_ram_420263e6(uVar2,0x100,puVar3,&stack0x0000001e);
          if (iVar1 != 0) {
            return 0x11;
          }
          puVar3[0x100] = (char)uStack0000001e;
LAB_ram_42026718:
          if ((*(uint *)(*(int *)(unaff_s0 + 8) + 0x10) & 0x10) == 0) {
            return 0;
          }
          FUN_ram_420323fe(**(undefined2 **)(*(int *)(unaff_s0 + 8) + 0x18));
          return 0;
        }
        uVar4 = (ushort)(byte)puVar3[0x100];
        goto LAB_ram_42026562;
      }
      if (param_1 < 0x2a4e) {
        if (param_1 == 0x2a4b) {
          if (puVar5[0x39e] == unaff_s2) {
            if (*unaff_s0 != 0) goto LAB_ram_420264d2;
            uVar4 = *(ushort *)(iVar6 + iVar1 * 0x750 + 0x742);
            iVar1 = iVar1 * 0x750 + 0x53d;
            goto LAB_ram_4202655e;
          }
        }
        else if (puVar5[0x3a5] == unaff_s2) {
          if (*unaff_s0 != 1) goto LAB_ram_420264d2;
          iVar6 = FUN_ram_4202d538(*(undefined4 *)(unaff_s0 + 4),(int)&stack0x00000018 + 3,1,0);
          if (iVar6 != 0) {
            return 0x11;
          }
          if (1 < in_stack_00000018._3_1_) {
            return 0xe;
          }
          puVar3 = (undefined1 *)(*(int *)(unaff_s3 + -0x490) + iVar1 * 0x750 + 0x74a);
LAB_ram_42026670:
          uVar2 = *(undefined4 *)(unaff_s0 + 4);
LAB_ram_420266a0:
          iVar1 = FUN_ram_420263e6(uVar2,1,puVar3,0);
          goto joined_r0x420266ea;
        }
      }
      else {
        if (param_1 != 0x2a4e) {
LAB_ram_420264d2:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf9e(0,0,0,0);
        }
        if (*puVar5 == unaff_s2) {
          uVar4 = 1;
          if (1 < *unaff_s0) goto LAB_ram_420264d2;
          uVar2 = *(undefined4 *)(unaff_s0 + 4);
          if (*unaff_s0 != 0) {
            iVar6 = FUN_ram_4202d538(uVar2,(int)&stack0x00000018 + 3,1,0);
            if (iVar6 != 0) {
              return 0x11;
            }
            if (1 < in_stack_00000018._3_1_) {
              return 0xe;
            }
            puVar3 = (undefined1 *)(*(int *)(unaff_s3 + -0x490) + iVar1 * 0x750 + 1);
            goto LAB_ram_42026670;
          }
          puVar3 = (undefined1 *)(iVar1 * 0x750 + 1 + iVar6);
          goto LAB_ram_42026562;
        }
      }
    }
LAB_ram_4202679e:
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 0x3a8;
  }
  if (puVar5[0x3a3] != unaff_s2) goto LAB_ram_4202679e;
  if (*unaff_s0 != 0) goto LAB_ram_420264d2;
  uVar4 = 4;
  iVar1 = iVar1 * 0x750 + 0x744;
LAB_ram_4202655e:
  puVar3 = (undefined1 *)(iVar1 + iVar6);
LAB_ram_42026560:
  uVar2 = *(undefined4 *)(unaff_s0 + 4);
LAB_ram_42026562:
  iVar1 = FUN_ram_403a3150(uVar2,puVar3,uVar4);
joined_r0x420266ea:
  if (iVar1 == 0) {
    return 0;
  }
  return 0x11;
}

