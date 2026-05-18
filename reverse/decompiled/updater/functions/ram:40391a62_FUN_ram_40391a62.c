
undefined4 FUN_ram_40391a62(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [156];
  
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uVar1 = FUN_ram_40396e5c(0);
  iVar2 = FUN_ram_40396e9e(uVar1,&local_b0);
  uVar1 = uStack_ac;
  uVar3 = 0x105;
  if (iVar2 == 1) {
    (*(code *)&SUB_ram_40010488)(auStack_a4,0,0x94);
    FUN_ram_40399daa(auStack_a4,uVar1,0x94);
    FUN_ram_42010c8c(auStack_a4);
    FUN_ram_42010ba2(auStack_a4,0);
    (*(code *)&SUB_ram_40010034)(0x3c0713a4);
    (*(code *)&SUB_ram_40010034)(0x3c0713a8);
    uVar3 = 0;
  }
  return uVar3;
}

