
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42096d2e(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint extraout_a1;
  int extraout_a2;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *extraout_a5;
  uint uVar6;
  uint extraout_a6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_48 [10];
  
  puVar5 = &DAT_ram_60040000;
  uVar6 = 0x80000000;
  _DAT_ram_60040020 = _DAT_ram_60040020 & 0x3fffffff;
  if (param_1 != 0) {
    FUN_ram_4039bf1e();
    param_2 = extraout_a1;
    param_3 = extraout_a2;
    puVar5 = extraout_a5;
    uVar6 = extraout_a6;
  }
  *(uint *)(puVar5 + 0x20) = *(uint *)(puVar5 + 0x20) | 0x1e000000;
  *(uint *)(puVar5 + 0x20) = *(uint *)(puVar5 + 0x20) & 0xfe7fffff | (param_2 & 3) << 0x17;
  *(uint *)(puVar5 + 0x20) = *(uint *)(puVar5 + 0x20) | uVar6;
  FUN_ram_40394b98(0x69,0,7,5,5,param_3 != 0);
  puVar7 = local_48;
  (*(code *)&SUB_ram_40010488)(local_48,0,0x28);
  iVar2 = 0;
  puVar8 = puVar7;
  do {
    FUN_ram_40394b98(0x69,0,1,3,0,8);
    FUN_ram_40394b98(0x69,0,0,7,0,0);
    iVar3 = FUN_ram_42096c4c(0);
    uVar1 = 0x800;
    uVar6 = 0x1000;
    uVar4 = 0;
    do {
      uVar9 = uVar1;
      if (iVar3 == 0) {
        uVar6 = uVar1;
        uVar9 = uVar4;
      }
      uVar1 = uVar6 + uVar9 >> 1;
      FUN_ram_40394b98(0x69,0,1,3,0,uVar6 + uVar9 >> 9);
      FUN_ram_40394b98(0x69,0,0,7,0,uVar1 & 0xff);
      iVar3 = FUN_ram_42096c4c(0);
      if (uVar6 - uVar9 == 1) {
        uVar1 = uVar1 + 1;
        FUN_ram_40394b98(0x69,0,1,3,0,uVar1 >> 8);
        FUN_ram_40394b98(0x69,0,0,7,0,uVar1 & 0xff);
        FUN_ram_42096c4c(0);
        break;
      }
      uVar4 = uVar9;
    } while (1 < uVar6 - uVar9);
    *puVar8 = uVar1;
    puVar8 = puVar8 + 1;
    iVar2 = iVar2 + uVar1;
    uVar6 = local_48[0];
    if (puVar8 == (uint *)&stack0xffffffe0) {
      do {
        uVar4 = *puVar7;
        if (uVar4 < uVar6) {
          uVar6 = uVar4;
        }
        if (local_48[0] < uVar4) {
          local_48[0] = uVar4;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != (uint *)&stack0xffffffe0);
      uVar6 = iVar2 - (uVar6 + local_48[0]);
      FUN_ram_40394b98(0x69,0,7,5,5,0);
      return (uVar6 >> 3) + (uint)((uVar6 & 4) != 0);
    }
  } while( true );
}

