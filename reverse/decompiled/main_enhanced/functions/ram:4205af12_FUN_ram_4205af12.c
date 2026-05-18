
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205af12(int param_1,undefined4 param_2)

{
  short sVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  
  pbVar2 = _DAT_ram_3fcc26b0;
  uVar7 = (*_DAT_ram_3fcc26b0 & 0xf) * 4;
  if (((((uVar7 < 0x14) || (*(ushort *)(param_1 + 10) < 4)) || (**(char **)(param_1 + 4) != '\b'))
      || (((_DAT_ram_3fcc26bc & 0xf0) == 0xe0 ||
          (iVar4 = FUN_ram_4205be44(_DAT_ram_3fcc26bc,_DAT_ram_3fcc26a8), iVar4 != 0)))) ||
     ((*(ushort *)(param_1 + 8) < 8 || (iVar4 = FUN_ram_4205e8e2(param_1), iVar4 != 0))))
  goto LAB_ram_4205af80;
  iVar4 = FUN_ram_42053a64(param_1);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_42053a6a(param_1,uVar7 + 0xe);
    if (iVar4 != 0) {
LAB_ram_4205aff6:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
LAB_ram_4205b010:
    puVar8 = *(undefined1 **)(param_1 + 4);
    iVar4 = FUN_ram_42053a64(param_1,uVar7);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 4);
      *(undefined1 *)(iVar4 + 0xc) = DAT_ram_3fcc26bc;
      *(undefined1 *)(iVar4 + 0xd) = DAT_ram_3fcc26bd;
      *(undefined1 *)(iVar4 + 0xe) = DAT_ram_3fcc26be;
      *(undefined1 *)(iVar4 + 0xf) = DAT_ram_3fcc26bf;
      *(undefined1 *)(iVar4 + 0x10) = DAT_ram_3fcc26b8;
      *(undefined1 *)(iVar4 + 0x11) = DAT_ram_3fcc26b9;
      *(undefined1 *)(iVar4 + 0x12) = DAT_ram_3fcc26ba;
      *(undefined1 *)(iVar4 + 0x13) = DAT_ram_3fcc26bb;
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
      uVar3 = FUN_ram_4205e8cc(iVar4,uVar7);
      *(char *)(iVar4 + 10) = (char)uVar3;
      *(char *)(iVar4 + 0xb) = (char)((ushort)uVar3 >> 8);
      FUN_ram_4205be20(param_1,&DAT_ram_3fcc26bc,0,0x40,0,1,param_2);
    }
  }
  else {
    uVar6 = *(ushort *)(param_1 + 8) + uVar7;
    if ((uVar6 < *(ushort *)(param_1 + 8)) ||
       (iVar4 = FUN_ram_42053b52(0xe,uVar6,0x280), iVar4 == 0)) goto LAB_ram_4205af80;
    if ((ushort)(uVar7 + 8) <= *(ushort *)(iVar4 + 10)) {
      FUN_ram_4039c11e(*(undefined4 *)(iVar4 + 4),pbVar2,uVar7);
      iVar5 = FUN_ram_42053a6a(iVar4,uVar7);
      if (iVar5 != 0) goto LAB_ram_4205aff6;
      iVar5 = FUN_ram_42053f12(iVar4,param_1);
      if (iVar5 == 0) {
        FUN_ram_42053ac4(param_1);
        param_1 = iVar4;
        goto LAB_ram_4205b010;
      }
    }
    FUN_ram_42053ac4(iVar4);
  }
LAB_ram_4205af80:
  FUN_ram_42053ac4(param_1);
  return;
}

