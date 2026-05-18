
void FUN_ram_40391c00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int iStack_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  
  while( true ) {
    FUN_ram_40396966();
    cVar1 = DAT_ram_3fcc51b0;
    if (DAT_ram_3fcc51d0 == '\0') break;
    FUN_ram_40396994();
  }
  iVar2 = *(int *)(gp + -0x770);
  if ((iVar2 == param_1) && (DAT_ram_3fcc51b0 == '\0')) {
    FUN_ram_40396994();
    return;
  }
  DAT_ram_3fcc51d0 = 1;
  DAT_ram_3fcc51b0 = 0;
  FUN_ram_4039c11e(auStack_40,param_1 * 0x10 + 0x3fcc1cd0,0x10);
  if (cVar1 == '\0') {
    FUN_ram_4039c11e(auStack_30,iVar2 * 0x10 + 0x3fcc1cd0);
  }
  else {
    FUN_ram_40394ee6(auStack_30);
  }
  FUN_ram_40396966();
  FUN_ram_40396994();
  if (iStack_34 != iStack_24) {
    FUN_ram_40394764(uStack_3c);
    FUN_ram_4039691e();
    FUN_ram_40396966();
    FUN_ram_403951aa(auStack_40);
    FUN_ram_4039691e();
    FUN_ram_40396994();
    FUN_ram_40394766(uStack_3c,iStack_34);
  }
  FUN_ram_40396966();
  FUN_ram_40396994();
  *(int *)(gp + -0x770) = param_1;
  DAT_ram_3fcc51d0 = 0;
  FUN_ram_40396994();
  return;
}

