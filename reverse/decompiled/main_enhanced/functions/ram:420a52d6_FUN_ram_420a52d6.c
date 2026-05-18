
void FUN_ram_420a52d6(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined **)(param_1 + 0xc0);
  if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_ram_3c0c39bc)) {
    uVar2 = (*(code *)&SUB_ram_400104a8)(puVar1);
    FUN_ram_4206d7fc(puVar1,uVar2);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

