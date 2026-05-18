
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42076c64(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe4f4);
    uVar2 = 0x102;
  }
  else {
    if ((param_2 == 0) && (0x1f < _DAT_ram_3fcc274c)) {
      return 0x101;
    }
    iVar3 = FUN_ram_42076bca(param_1,param_2);
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
      if (_DAT_ram_3fcc3040 != 0) {
        puVar4 = (undefined4 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0xc);
        if (puVar4 == (undefined4 *)0x0) {
          FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe510);
          uVar2 = 0x101;
        }
        else {
          FUN_ram_4039c11e(puVar4 + 1,param_1,6);
          if (param_2 == 0) {
            puVar1 = &DAT_ram_3fcc2744;
          }
          else {
            if (param_2 != 1) {
              return 0x102;
            }
            puVar1 = &DAT_ram_3fcc2750;
          }
          (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcc3040);
          puVar5 = *(undefined4 **)(puVar1 + 4);
          *puVar4 = 0;
          *puVar5 = puVar4;
          iVar3 = _DAT_ram_3fcc3040;
          *(undefined4 **)(puVar1 + 4) = puVar4;
          *(int *)(puVar1 + 8) = *(int *)(puVar1 + 8) + 1;
          (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(iVar3);
          uVar2 = 0;
        }
      }
    }
    else {
      FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe504);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

