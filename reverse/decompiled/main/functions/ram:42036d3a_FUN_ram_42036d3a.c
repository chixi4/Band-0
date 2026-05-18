
undefined2 FUN_ram_42036d3a(void)

{
  undefined2 uVar1;
  int iVar2;
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_4203664e();
  if (iVar2 == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = *(undefined2 *)(iVar2 + 6);
  }
  thunk_FUN_ram_4202b7f6();
  return uVar1;
}

