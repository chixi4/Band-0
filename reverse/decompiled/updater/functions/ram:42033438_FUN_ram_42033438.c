
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033438(int *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined1 auStack_28 [20];
  
  iVar3 = FUN_ram_42022ea8(param_2,0);
  if (iVar3 == 0) {
    if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
      FUN_ram_42033fd8(1,0x800,1,0x3c07cfe8,0x3c072634,0x12df);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    (*(code *)&SUB_ram_40011fd0)(_DAT_ram_3fcb4f84 != *param_1,auStack_28);
    iVar3 = (*(code *)&SUB_ram_40012124)(param_1,param_2,param_3);
    uVar4 = 1;
    if (iVar3 != 0) {
      puVar6 = *(uint **)(iVar3 + 4);
      uVar1 = *(ushort *)(iVar3 + 0x14);
      uVar2 = *(ushort *)(iVar3 + 0x16);
      *puVar6 = *puVar6 | 0x80000000;
      *puVar6 = *puVar6 | 0x40000000;
      *puVar6 = *puVar6 & 0xdfffffff;
      *puVar6 = *puVar6 & 0xff000fff | ((uint)uVar2 + (uint)uVar1 & 0xfff) << 0xc;
      (*(code *)&SUB_ram_40012098)(param_1,iVar3,0xc0,0x10,auStack_28,param_2);
      (*(code *)&SUB_ram_40011fc8)(param_1,iVar3,7,0x10,0);
      *(uint *)(*(int *)(iVar3 + 0x24) + 0x14) = *(uint *)(*(int *)(iVar3 + 0x24) + 0x14) | 4;
      FUN_ram_42022eac(param_2,0);
      iVar5 = (*(code *)&SUB_ram_40011f94)();
      if (iVar5 == 0) {
        *(undefined4 *)(iVar3 + 0x20) = 0;
        uVar4 = 0;
        *_DAT_ram_3fcb50dc = iVar3;
        _DAT_ram_3fcb50dc = (int *)(iVar3 + 0x20);
      }
      else {
        uVar4 = (*(code *)&SUB_ram_40011ed8)(iVar3);
      }
    }
  }
  else {
    FUN_ram_42033fd8(1,8,4,0x3c07ab80);
    uVar4 = 1;
  }
  return uVar4;
}

