
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42038b4c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  byte bStack_38;
  char cStack_37;
  ushort uStack_36;
  uint auStack_34 [4];
  
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x158))(0x400);
  if (iVar3 == 0) {
    FUN_ram_42033fd8(1,0x101,2,0x3c07f9e4);
    uVar4 = 0x101;
  }
  else {
    uVar9 = 0;
    (*(code *)&SUB_ram_40010488)(iVar3,0xff,0x400);
    piVar8 = (int *)(gp + -0x2b8);
    do {
      iVar2 = _DAT_ram_3fcb398c + uVar9 * 0x34;
      if (*(byte *)(iVar2 + 0x20) != uVar9) {
        FUN_ram_42033fd8(1,0x102,2,0x3c07f9fc,uVar9);
        goto LAB_ram_42038bf8;
      }
      bVar1 = *(byte *)(iVar2 + 0x21);
      if (bVar1 == 2) {
        if (_DAT_ram_3fcb3f74 == 0) {
          if (param_1 != 0) goto LAB_ram_42038d82;
        }
        else if (param_1 == 0) {
          iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x120))
                            (*(undefined4 *)(*piVar8 + 0x410),iVar2,&uStack_36);
          if (iVar5 == 0) {
            **(ushort **)(iVar2 + 0x30) = uStack_36;
            if ((*(int *)(iVar2 + 0x24) <= (int)(uint)uStack_36) &&
               ((uint)uStack_36 <= (uint)*(ushort *)(iVar2 + 0x28))) goto LAB_ram_42038c62;
          }
        }
        else {
LAB_ram_42038d82:
          if ((_DAT_ram_3fcb3f74 != 0) &&
             (iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x11c))
                                (*(undefined4 *)(*piVar8 + 0x410),iVar2,
                                 *(uint *)(iVar2 + 0x2c) & 0xffff), iVar5 != 0)) {
LAB_ram_42038bf8:
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar3);
            return 0xffffffff;
          }
        }
        **(undefined2 **)(iVar2 + 0x30) = (short)*(undefined4 *)(iVar2 + 0x2c);
      }
      else if (bVar1 < 3) {
        if (bVar1 == 0) {
          if (_DAT_ram_3fcb3f74 == 0) {
            if (param_1 != 0) goto LAB_ram_42038d22;
          }
          else if (param_1 == 0) {
            iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x118))
                              (*(undefined4 *)(*piVar8 + 0x410),iVar2,&bStack_38);
            if (iVar5 == 0) {
              **(byte **)(iVar2 + 0x30) = bStack_38;
              if ((*(int *)(iVar2 + 0x24) <= (int)(uint)bStack_38) &&
                 ((uint)bStack_38 <= (uint)*(ushort *)(iVar2 + 0x28))) goto LAB_ram_42038c62;
            }
          }
          else {
LAB_ram_42038d22:
            if (_DAT_ram_3fcb3f74 != 0) {
              iVar5 = *piVar8;
              uVar6 = *(uint *)(iVar2 + 0x2c) & 0xff;
              pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x114);
LAB_ram_42038d12:
              iVar5 = (*pcVar7)(*(undefined4 *)(iVar5 + 0x410),iVar2,uVar6);
              if (iVar5 != 0) goto LAB_ram_42038bf8;
            }
          }
        }
        else if (_DAT_ram_3fcb3f74 == 0) {
          if (param_1 != 0) goto LAB_ram_42038cfe;
        }
        else if (param_1 == 0) {
          iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x110))
                            (*(undefined4 *)(*piVar8 + 0x410),iVar2,&cStack_37);
          if (iVar5 == 0) {
            **(char **)(iVar2 + 0x30) = cStack_37;
            if ((*(int *)(iVar2 + 0x24) <= (int)cStack_37) &&
               ((int)cStack_37 <= (int)(uint)*(ushort *)(iVar2 + 0x28))) goto LAB_ram_42038c62;
          }
        }
        else {
LAB_ram_42038cfe:
          if (_DAT_ram_3fcb3f74 != 0) {
            iVar5 = *piVar8;
            pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x10c);
            uVar6 = (uint)(char)*(undefined4 *)(iVar2 + 0x2c);
            goto LAB_ram_42038d12;
          }
        }
        **(undefined1 **)(iVar2 + 0x30) = (char)*(undefined4 *)(iVar2 + 0x2c);
      }
      else if ((byte)(bVar1 - 6) < 2) {
        auStack_34[0] = (uint)*(ushort *)(iVar2 + 0x22);
        if (_DAT_ram_3fcb3f74 != 0) {
          iVar5 = *piVar8;
          if (param_1 == 0) {
            iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x134))
                              (*(undefined4 *)(iVar5 + 0x410),iVar2,*(undefined4 *)(iVar2 + 0x30),
                               auStack_34,iVar5,*(code **)(_DAT_ram_3fcdfdd8 + 0x134));
            if (iVar5 == 0) goto LAB_ram_42038c62;
          }
          else {
            iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x130))
                              (*(undefined4 *)(iVar5 + 0x410),iVar2,iVar3,auStack_34[0],iVar5,
                               *(code **)(_DAT_ram_3fcdfdd8 + 0x130));
            if (iVar5 != 0) goto LAB_ram_42038bf8;
          }
        }
        FUN_ram_40399daa(*(undefined4 *)(iVar2 + 0x30),iVar3,*(undefined2 *)(iVar2 + 0x22));
      }
LAB_ram_42038c62:
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x54);
    FUN_ram_420389a4();
    FUN_ram_42038950();
    FUN_ram_42038a84();
    FUN_ram_420389f0();
    FUN_ram_420388e0();
    FUN_ram_42038904();
    FUN_ram_42038a3a();
    FUN_ram_42038a6e();
    FUN_ram_420386a2();
    FUN_ram_42038b22();
    if (_DAT_ram_3fcb3f74 != 0) {
      FUN_ram_420384de();
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar3);
    uVar4 = 0;
  }
  return uVar4;
}

