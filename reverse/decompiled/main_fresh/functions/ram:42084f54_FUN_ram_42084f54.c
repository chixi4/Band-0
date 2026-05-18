
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42084f54(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = FUN_ram_4208387a();
    if (iVar1 == 0) {
      return 0x3001;
    }
    if (param_2 == 0) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0xc);
      if (iVar1 != 0) {
        FUN_ram_4039c11e(iVar1,param_1,0xc);
        if ((param_1[2] != 0) && (param_1[1] != 0)) {
          iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))();
          *(int *)(iVar1 + 4) = iVar3;
          if (iVar3 == 0) {
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
            return 0x101;
          }
          FUN_ram_4039c11e(iVar3,param_1[1],param_1[2]);
        }
        puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
        if (puVar2 == (undefined1 *)0x0) {
          iVar3 = 0x101;
        }
        else {
          *puVar2 = 0x31;
          *(undefined4 *)(puVar2 + 4) = 0x42072654;
          *(undefined2 *)(puVar2 + 8) = 2;
          puVar2[10] = 0;
          *(int *)(puVar2 + 0xc) = iVar1;
          *(undefined4 *)(puVar2 + 0x14) = 0;
          iVar3 = FUN_ram_42082b56();
          if (iVar3 == 0) {
            return 0;
          }
        }
        FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fefa4);
        if ((param_1[2] != 0) && (param_1[1] != 0)) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(*(undefined4 *)(iVar1 + 4));
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
        return iVar3;
      }
    }
    else {
      puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0x31;
        *(undefined4 *)(puVar2 + 4) = 0x42072654;
        *(undefined2 *)(puVar2 + 8) = 1;
        puVar2[10] = 0;
        *(int **)(puVar2 + 0xc) = param_1;
        *(undefined4 *)(puVar2 + 0x14) = 0;
        iVar1 = FUN_ram_42082b56();
        return iVar1;
      }
    }
    return 0x101;
  }
  return 0x102;
}

