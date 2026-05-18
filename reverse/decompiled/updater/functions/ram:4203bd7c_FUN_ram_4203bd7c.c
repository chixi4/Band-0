
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203bd7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4203bf94();
  if (iVar1 == 0) {
    iVar1 = (*(code *)&SUB_ram_40012088)();
    if (iVar1 == 3) {
      puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(8);
      if (puVar2 == (undefined1 *)0x0) {
        FUN_ram_4203bf68();
        uVar3 = 0x3c07d70c;
      }
      else {
        *puVar2 = (char)param_2;
        *(undefined4 *)(puVar2 + 4) = param_3;
        iVar1 = (*(code *)&SUB_ram_40011c5c)(param_1,puVar2);
        if (iVar1 == 0) {
          FUN_ram_4203bf68();
          return 0;
        }
        FUN_ram_4203bf68();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar2);
        uVar3 = 0x3c07d6f0;
      }
      FUN_ram_42033fd8(6,0x10000,1,uVar3,param_2);
      iVar1 = -1;
    }
    else {
      FUN_ram_4203bf68();
      FUN_ram_42033fd8(1,0x10000,1,0x3c07d6cc,param_2);
      iVar1 = 0x3001;
    }
  }
  else {
    FUN_ram_42033fd8(1,0x10000,1,0x3c07d6a4,param_2);
  }
  return iVar1;
}

