
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420134e6(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = 0;
  FUN_ram_40394d60();
  do {
    if (_DAT_ram_3fcb6668 <= iVar7) {
      FUN_ram_40394d8e();
      return;
    }
    puVar6 = *(undefined4 **)(_DAT_ram_3fcb666c + iVar7 * 4);
    if (puVar6 != (undefined4 *)0x0) {
      if (param_2 == 1) {
        if (param_1 < 0x40) {
          uVar3 = 1 << (param_1 & 0x1f);
          if ((puVar6[(param_1 >> 5) + 7] & uVar3) != 0) {
            iVar5 = puVar6[3];
            iVar4 = (param_1 >> 5) << 2;
            goto LAB_ram_42013578;
          }
        }
      }
      else if (param_2 == 2) {
        if (param_1 < 0x40) {
          uVar3 = 1 << (param_1 & 0x1f);
          if ((puVar6[(param_1 >> 5) + 9] & uVar3) != 0) {
            iVar5 = puVar6[4];
            iVar4 = (param_1 >> 5) << 2;
            goto LAB_ram_42013578;
          }
        }
      }
      else if ((param_2 == 0) && (param_1 < 0x40)) {
        uVar3 = 1 << (param_1 & 0x1f);
        if ((puVar6[(param_1 >> 5) + 5] & uVar3) != 0) {
          iVar5 = puVar6[2];
          iVar4 = (param_1 >> 5) << 2;
LAB_ram_42013578:
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          *(uint *)(iVar5 + iVar4) = *(uint *)(iVar5 + iVar4) | uVar3;
          FUN_ram_42015b86(uVar1,uVar2,param_3);
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

