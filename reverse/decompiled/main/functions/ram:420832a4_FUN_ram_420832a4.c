
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420832a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  iVar1 = FUN_ram_4208353e();
  if (iVar1 == 0) {
    iVar1 = (*(code *)&SUB_ram_40012088)();
    if (iVar1 == 3) {
      puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(8);
      if (puVar2 == (undefined1 *)0x0) {
        FUN_ram_42083512();
        puVar3 = &DAT_ram_3c0fee6c;
      }
      else {
        *puVar2 = (char)param_2;
        *(undefined4 *)(puVar2 + 4) = param_3;
        iVar1 = (*(code *)&SUB_ram_40011c5c)(param_1,puVar2);
        if (iVar1 == 0) {
          FUN_ram_42083512();
          return 0;
        }
        FUN_ram_42083512();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar2);
        puVar3 = &DAT_ram_3c0fee50;
      }
      FUN_ram_4207a038(6,0x10000,1,puVar3,param_2);
      iVar1 = -1;
    }
    else {
      FUN_ram_42083512();
      FUN_ram_4207a038(1,0x10000,1,&DAT_ram_3c0fee2c,param_2);
      iVar1 = 0x3001;
    }
  }
  else {
    FUN_ram_4207a038(1,0x10000,1,&DAT_ram_3c0fee04,param_2);
  }
  return iVar1;
}

