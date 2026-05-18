
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42074092(void)

{
  int iVar1;
  
  (*(code *)&SUB_ram_40012314)(1);
  FUN_ram_403935a2(1);
  FUN_ram_4207691e(1);
  (**(code **)(_DAT_ram_3fcb640c + 0x78))();
  (**(code **)(_DAT_ram_3fcb640c + 0x8c))();
  (**(code **)(_DAT_ram_3fcb640c + 0x7c))();
  (**(code **)(_DAT_ram_3fcb640c + 0x10c))();
  (**(code **)(_DAT_ram_3fcb640c + 0x114))();
  FUN_ram_42075258(1,DAT_ram_3fcb0ab6);
  (**(code **)(_DAT_ram_3fcb640c + 0xdc))();
  FUN_ram_42076848();
  FUN_ram_42076402();
  iVar1 = (**(code **)(_DAT_ram_3fcb640c + 0x54))(0x69,0,4,3,0,*(code **)(_DAT_ram_3fcb640c + 0x54))
  ;
  if (iVar1 == 0) {
    (*(code *)&SUB_ram_40012304)(0x578);
  }
  FUN_ram_420768fe();
  FUN_ram_42074060();
  FUN_ram_420765d8();
  FUN_ram_42075156(0,2);
  return;
}

