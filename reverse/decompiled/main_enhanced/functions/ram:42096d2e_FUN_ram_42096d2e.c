
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42096d2e(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_48 [10];
  
  if (param_1 != 0) {
    _DAT_ram_60040020 = _DAT_ram_60040020 & 0x3fffffff;
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  _DAT_ram_60040020 =
       _DAT_ram_60040020 & 0x3e7fffff | 0x1e000000 | (param_2 & 3) << 0x17 | 0x80000000;
  FUN_ram_40394b98(0x69,0,7,5,5,param_3 != 0);
  puVar5 = local_48;
  (*(code *)&SUB_ram_40010488)(local_48,0,0x28);
  iVar2 = 0;
  puVar6 = puVar5;
  do {
    FUN_ram_40394b98(0x69,0,1,3,0,8);
    FUN_ram_40394b98(0x69,0,0,7,0,0);
    iVar3 = FUN_ram_42096c4c(0);
    uVar1 = 0x800;
    uVar7 = 0x1000;
    uVar4 = 0;
    do {
      uVar8 = uVar1;
      if (iVar3 == 0) {
        uVar7 = uVar1;
        uVar8 = uVar4;
      }
      uVar1 = uVar7 + uVar8 >> 1;
      FUN_ram_40394b98(0x69,0,1,3,0,uVar7 + uVar8 >> 9);
      FUN_ram_40394b98(0x69,0,0,7,0,uVar1 & 0xff);
      iVar3 = FUN_ram_42096c4c(0);
      if (uVar7 - uVar8 == 1) {
        uVar1 = uVar1 + 1;
        FUN_ram_40394b98(0x69,0,1,3,0,uVar1 >> 8);
        FUN_ram_40394b98(0x69,0,0,7,0,uVar1 & 0xff);
        FUN_ram_42096c4c(0);
        break;
      }
      uVar4 = uVar8;
    } while (1 < uVar7 - uVar8);
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    iVar2 = iVar2 + uVar1;
    uVar7 = local_48[0];
    if (puVar6 == (uint *)&stack0xffffffe0) {
      do {
        uVar4 = *puVar5;
        if (uVar4 < uVar7) {
          uVar7 = uVar4;
        }
        if (local_48[0] < uVar4) {
          local_48[0] = uVar4;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != (uint *)&stack0xffffffe0);
      uVar7 = iVar2 - (uVar7 + local_48[0]);
      FUN_ram_40394b98(0x69,0,7,5,5,0);
      return (uVar7 >> 3) + (uint)((uVar7 & 4) != 0);
    }
  } while( true );
}

