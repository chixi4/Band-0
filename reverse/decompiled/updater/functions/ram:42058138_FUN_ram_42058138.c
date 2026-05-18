
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42058138(int param_1,undefined4 param_2)

{
  short sVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  
  pbVar2 = _DAT_ram_3fcb5e5c;
  uVar7 = (*_DAT_ram_3fcb5e5c & 0xf) * 4;
  if (((((uVar7 < 0x14) || (*(ushort *)(param_1 + 10) < 4)) || (**(char **)(param_1 + 4) != '\b'))
      || (((_DAT_ram_3fcb5e68 & 0xf0) == 0xe0 ||
          (iVar4 = FUN_ram_42059006(_DAT_ram_3fcb5e68,_DAT_ram_3fcb5e54), iVar4 != 0)))) ||
     ((*(ushort *)(param_1 + 8) < 8 || (iVar4 = FUN_ram_4205b3c4(param_1), iVar4 != 0))))
  goto LAB_ram_420581a6;
  iVar4 = FUN_ram_42051cac(param_1);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_42051cb2(param_1,uVar7 + 0xe);
    if (iVar4 != 0) goto LAB_ram_420581a6;
LAB_ram_4205822e:
    puVar8 = *(undefined1 **)(param_1 + 4);
    iVar4 = FUN_ram_42051cac(param_1,uVar7);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 4);
      *(undefined1 *)(iVar4 + 0xc) = DAT_ram_3fcb5e68;
      *(undefined1 *)(iVar4 + 0xd) = DAT_ram_3fcb5e69;
      *(undefined1 *)(iVar4 + 0xe) = DAT_ram_3fcb5e6a;
      *(undefined1 *)(iVar4 + 0xf) = DAT_ram_3fcb5e6b;
      *(undefined1 *)(iVar4 + 0x10) = DAT_ram_3fcb5e64;
      *(undefined1 *)(iVar4 + 0x11) = DAT_ram_3fcb5e65;
      *(undefined1 *)(iVar4 + 0x12) = DAT_ram_3fcb5e66;
      *(undefined1 *)(iVar4 + 0x13) = DAT_ram_3fcb5e67;
      *puVar8 = 0;
      if (*(ushort *)(puVar8 + 2) < 0xfff8) {
        sVar1 = 8;
      }
      else {
        sVar1 = 9;
      }
      *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) + sVar1;
      *(undefined1 *)(iVar4 + 8) = 0x40;
      *(undefined1 *)(iVar4 + 10) = 0;
      *(undefined1 *)(iVar4 + 0xb) = 0;
      uVar3 = FUN_ram_4205b3ae(iVar4,uVar7);
      *(char *)(iVar4 + 10) = (char)uVar3;
      *(char *)(iVar4 + 0xb) = (char)((ushort)uVar3 >> 8);
      FUN_ram_42058fe2(param_1,&DAT_ram_3fcb5e68,0,0x40,0,1,param_2);
    }
  }
  else {
    uVar6 = *(ushort *)(param_1 + 8) + uVar7;
    if ((uVar6 < *(ushort *)(param_1 + 8)) ||
       (iVar4 = FUN_ram_42051d86(0xe,uVar6,0x280), iVar4 == 0)) goto LAB_ram_420581a6;
    if ((ushort)(uVar7 + 8) <= *(ushort *)(iVar4 + 10)) {
      FUN_ram_40399daa(*(undefined4 *)(iVar4 + 4),pbVar2,uVar7);
      iVar5 = FUN_ram_42051cb2(iVar4,uVar7);
      if ((iVar5 == 0) && (iVar5 = FUN_ram_420520a2(iVar4,param_1), iVar5 == 0)) {
        FUN_ram_42051d02(param_1);
        param_1 = iVar4;
        goto LAB_ram_4205822e;
      }
    }
    FUN_ram_42051d02(iVar4);
  }
LAB_ram_420581a6:
  FUN_ram_42051d02(param_1);
  return;
}

