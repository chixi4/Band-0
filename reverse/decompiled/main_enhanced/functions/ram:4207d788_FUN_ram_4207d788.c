
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207d788(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  byte *pbVar9;
  uint uStack_34;
  
  iVar6 = *(ushort *)(param_2 + 0x16) - 0xe;
  *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(*(int *)(param_2 + 4) + 4) + 0xe;
  while( true ) {
    *(short *)(param_2 + 0x16) = (short)iVar6;
    iVar6 = FUN_ram_4207d712(param_2,&uStack_34);
    uVar2 = uStack_34;
    if (iVar6 == 0) break;
    iVar6 = (*(code *)&SUB_ram_40011fdc)(0,7,uStack_34);
    if (iVar6 == 0) break;
    uVar8 = uVar2 & 0xffff;
    **(uint **)(iVar6 + 0x24) = **(uint **)(iVar6 + 0x24) | 0x80;
    FUN_ram_4039c11e(*(undefined4 *)(*(int *)(iVar6 + 4) + 4),
                     *(undefined4 *)(*(int *)(param_2 + 4) + 4),uVar2);
    if (_DAT_ram_3fcc4014 == param_1) {
      if (_DAT_ram_3fcdfb08 != (code *)0x0) {
        iVar4 = *(int *)(iVar6 + 4);
        pcVar7 = _DAT_ram_3fcdfb08;
LAB_ram_4207d824:
        (*pcVar7)(*(undefined4 *)(iVar4 + 4),uVar8,iVar6);
      }
    }
    else if (_DAT_ram_3fcc2718 != (code *)0x0) {
      pbVar9 = *(byte **)(*(int *)(iVar6 + 4) + 4);
      if (((*pbVar9 & 1) != 0) || (iVar4 = FUN_ram_4039c0e0(pbVar9,&DAT_ram_3fcc41c8,6), iVar4 != 0)
         ) {
        FUN_ram_42075152(1,pbVar9,uVar8);
      }
      iVar4 = *(int *)(iVar6 + 4);
      pcVar7 = _DAT_ram_3fcc2718;
      goto LAB_ram_4207d824;
    }
    iVar4 = *(int *)(param_2 + 4);
    uVar1 = *(ushort *)(param_2 + 0x16);
    uVar3 = uVar1 - uVar8;
    iVar5 = *(int *)(iVar4 + 4) + uVar2;
    *(int *)(iVar4 + 4) = iVar5;
    *(short *)(param_2 + 0x16) = (short)(uVar3 * 0x10000 >> 0x10);
    if ((uVar3 & 0xffff) < 0x16) break;
    iVar6 = (uint)uVar1 - (uVar8 + 3 & 0xfffffffc);
    *(uint *)(iVar4 + 4) = iVar5 + ((uVar2 + 3 & 0xfffffffc) - uVar2);
  }
  (*(code *)&SUB_ram_40011fa0)(param_2);
  return 0;
}

