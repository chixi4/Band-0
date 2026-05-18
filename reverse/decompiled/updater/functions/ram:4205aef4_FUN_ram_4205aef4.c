
void FUN_ram_4205aef4(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_42059fe8(*param_1);
  if (iVar1 == 0) {
    iVar1 = -0xb;
    uVar2 = ((uint *)*param_1)[2];
    if (uVar2 != 0) {
      uVar4 = *(uint *)*param_1 & 0xf0;
      if (uVar4 == 0x20) {
        puVar3 = (undefined4 *)param_1[2];
        if (puVar3[2] == 0) {
          iVar1 = FUN_ram_42056060();
        }
        else {
          iVar1 = FUN_ram_42055fc6(uVar2,*puVar3,puVar3 + 2,*(undefined2 *)(puVar3 + 3));
        }
      }
      else {
        iVar1 = -0xb;
        if (uVar4 == 0x40) {
          puVar3 = (undefined4 *)param_1[2];
          if (puVar3[2] == 0) {
            iVar1 = FUN_ram_42052514();
          }
          else {
            iVar1 = FUN_ram_4205248e(uVar2,*puVar3,puVar3 + 2);
          }
        }
      }
    }
  }
  *(char *)(param_1 + 1) = (char)iVar1;
  thunk_FUN_ram_4205973a(param_1[9]);
  return;
}

