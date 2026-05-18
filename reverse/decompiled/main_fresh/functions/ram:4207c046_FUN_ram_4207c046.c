
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207c046(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  ushort uStack_3c;
  undefined2 uStack_3a;
  ushort uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  
  uVar4 = _DAT_ram_3fcc3008;
  if (param_1 == (int *)0x0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe828,&DAT_ram_3c0c426c,0xb2a);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = *(ushort *)(param_3 + 3);
  uVar5 = (uint)uVar2;
  if (((int)uVar5 >> 2 & 8U) != 0) {
    return 0;
  }
  uVar10 = (int)uVar5 >> 2 & 0xf;
  if (((uint *)param_1[uVar10 + 0x9a] != (uint *)0x0) &&
     ((*(uint *)param_1[uVar10 + 0x9a] & 2) != 0)) {
    return 0;
  }
  uVar3 = *(undefined2 *)(param_3 + 7);
  bVar1 = *(byte *)(param_3 + 2);
  uStack_3c = (ushort)bVar1;
  if ((*(uint *)(*param_1 + 300) & 0x200000) != 0) {
    iVar6 = FUN_ram_4207bf06(param_1,uVar5,uVar3,bVar1);
    if (iVar6 != 1) {
LAB_ram_4207c156:
      uStack_3a = 0;
      goto LAB_ram_4207c158;
    }
    if ((*param_1 == _DAT_ram_3fcc4014) && (uVar10 == 0)) {
      for (uVar9 = *(ushort *)(param_1 + 0xa2); uVar9 != 0; uVar9 = uVar9 & 0xfffe) {
        uVar7 = (*(code *)&SUB_ram_400108ec)(uVar9);
        if (uVar7 != 0) {
          FUN_ram_4207bd06(param_1,uVar7 & 0xff);
          uStack_44 = (undefined2)uVar7;
          uStack_42 = 0;
          uStack_40 = 1;
          FUN_ram_4208cfae(param_1,3,2,&uStack_44);
          break;
        }
      }
      iVar6 = FUN_ram_4207bf06(param_1,uVar5,uVar3,bVar1);
      if (iVar6 != 1) goto LAB_ram_4207c156;
    }
  }
  uStack_3a = 1;
LAB_ram_4207c158:
  if (param_1[uVar10 + 0x9a] != 0) {
    *(char *)(param_1[uVar10 + 0x9a] + 0x25) = (char)uStack_3a;
  }
  uVar7 = (uint)(uVar2 >> 6);
  uVar8 = uVar4 & 0xff;
  uVar5 = uVar8;
  if ((uVar7 != 0) && (uVar5 = uVar7, uVar8 < uVar7)) {
    uVar5 = uVar4 & 0xff;
  }
  uStack_38 = (short)uVar10 * 4 | (ushort)(uVar5 << 6) | 2;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_ram_4208cfae(param_1,3,1,&uStack_3c);
  return 0;
}

