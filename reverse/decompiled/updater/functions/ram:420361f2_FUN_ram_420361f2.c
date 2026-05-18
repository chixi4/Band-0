
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420361f2(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  ushort uStack_28;
  undefined2 uStack_26;
  short sStack_24;
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d138,0x3c072718,0x3aa);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar8 = param_1 + param_2 * 4;
  piVar3 = *(int **)(iVar8 + 0x244);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x78);
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    *piVar3 = param_1;
    *(char *)((int)piVar3 + 0x2f) = (char)param_2;
    *(int **)(iVar8 + 0x244) = piVar3;
  }
  if ((*(ushort *)(piVar3 + 0xb) & 8) == 0) {
    *(ushort *)(piVar3 + 0xb) = *(ushort *)(piVar3 + 0xb) | 8;
  }
  iVar8 = (_DAT_ram_3fcb3988 + 1) % 0x3f;
  uVar6 = *(uint *)(param_1 + 0xc);
  *(undefined2 *)((int)piVar3 + 0x46) = *(undefined2 *)((param_2 + 0x50) * 2 + param_1 + 0xe);
  uVar1 = (ushort)(param_2 * 4) & 0x3c;
  uStack_28 = uVar1 | 0x1002;
  uStack_2a = 0;
  uStack_26 = 0;
  uStack_2c = (undefined2)iVar8;
  if ((uVar6 & 0x80000) != 0) {
    uStack_28 = uVar1 | 0x1003;
  }
  *(ushort *)(piVar3 + 0xb) = *(ushort *)(piVar3 + 0xb) & 0xffef | 1;
  *(short *)((int)piVar3 + 0x4a) = (short)((int)(uint)uStack_28 >> 6);
  iVar2 = _DAT_ram_3fcdfdd8;
  *(char *)(piVar3 + 0xc) = (char)iVar8;
  piVar4 = piVar3 + 1;
  (**(code **)(iVar2 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(piVar4);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(piVar4,0x420254b8,piVar3);
  if (*(byte *)(piVar3 + 0x13) < 3) {
    uVar5 = 1000;
    pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
  }
  else {
    pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
    uVar5 = 10000;
  }
  (*pcVar7)(piVar4,uVar5,0);
  *(ushort *)(piVar3 + 0xb) = *(ushort *)(piVar3 + 0xb) | 2;
  sStack_24 = *(short *)((int)piVar3 + 0x46) << 4;
  _DAT_ram_3fcb3988 = iVar8;
  uVar5 = FUN_ram_420445a0(param_1,3,0,&uStack_2c);
  return uVar5;
}

