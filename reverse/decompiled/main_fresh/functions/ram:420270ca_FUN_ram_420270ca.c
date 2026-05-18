
void FUN_ram_420270ca(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uStack_14;
  
  puVar2 = (undefined1 *)FUN_ram_4202fef8(0xb,1,&uStack_14);
  if (puVar2 == (undefined1 *)0x0) {
    *param_2 = 6;
  }
  else {
    uVar1 = FUN_ram_42026fe8();
    *puVar2 = uVar1;
    iVar3 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_14);
    if (iVar3 != 0) {
      *param_2 = iVar3;
    }
  }
  return;
}

