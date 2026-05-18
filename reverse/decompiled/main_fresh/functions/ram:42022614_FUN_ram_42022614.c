
void FUN_ram_42022614(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_90 [132];
  
  iVar1 = FUN_ram_420174ae();
  uVar2 = FUN_ram_42017776();
  uVar3 = FUN_ram_4201775a();
  if (iVar1 == 0) {
    puVar4 = &DAT_ram_3c0c19c8;
  }
  else {
    puVar4 = &DAT_ram_3c0c19c0;
  }
  uVar2 = (*(code *)&SUB_ram_400106ac)(auStack_90,0x80,&DAT_ram_3c0c19d0,puVar4,uVar2,uVar3,0x3800);
  FUN_ram_4206614c(param_1,"ng resources today.");
  FUN_ram_42066162(param_1,"hile moving.");
  FUN_ram_42066116(param_1,&DAT_ram_3c0c195c,"ep.");
  FUN_ram_42066178(param_1,auStack_90,uVar2);
  return;
}

