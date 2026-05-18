
void FUN_ram_42022d4e(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_2f4 [8];
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined1 auStack_2dc [40];
  char cStack_2b4;
  undefined1 auStack_2b0 [64];
  undefined1 auStack_270 [96];
  undefined1 auStack_210 [520];
  
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  iVar1 = FUN_ram_420659c0(param_1,auStack_2b0,0x40);
  if (iVar1 == 0) {
    FUN_ram_420658ea(auStack_2b0,"sult forward.",&uStack_2ec,0xd);
  }
  iVar1 = FUN_ram_420227ae(&uStack_2ec,auStack_2f4);
  if ((iVar1 == 0) || (iVar1 = FUN_ram_4202255c(auStack_2f4,auStack_2dc), iVar1 == 0)) {
    FUN_ram_4206614c(param_1,&DAT_ram_3c0c1924);
    puVar3 = (undefined1 *)0x3c0a85ec;
  }
  else {
    if (cStack_2b4 != '\0') {
      FUN_ram_420229f2(auStack_270,auStack_2dc);
      FUN_ram_4202284c(param_1,0,0);
      uVar2 = (*(code *)&SUB_ram_400106ac)
                        (auStack_210,0x200,&DAT_ram_3c0c1e90,auStack_270,&uStack_2ec);
      FUN_ram_4206632e(param_1,auStack_210,uVar2);
      FUN_ram_4202281c(param_1);
      return;
    }
    (*(code *)&SUB_ram_400106ac)(auStack_210,0x28," forward.",&uStack_2ec);
    FUN_ram_4206614c(param_1,&DAT_ram_3c0c1924);
    puVar3 = auStack_210;
  }
  FUN_ram_42066116(param_1,"ce at the future goal before sleep.",puVar3);
  FUN_ram_42066178(param_1,0,0);
  return;
}

