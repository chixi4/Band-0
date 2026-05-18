
void FUN_ram_4039bf1e(void)

{
  int unaff_retaddr;
  code *pcVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  undefined1 auStack_9c [15];
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 **ppuStack_78;
  code *pcStack_74;
  undefined2 auStack_64 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined2 *local_54 [4];
  undefined2 *apuStack_44 [13];
  
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  auStack_64[0] = 0;
  (*(code *)&SUB_ram_40010488)(apuStack_44,0,0x32);
  (*(code *)&SUB_ram_4001057c)(unaff_retaddr + -3,&uStack_60,0x10);
  (*(code *)&SUB_ram_4001057c)(0,auStack_64,10);
  local_54[0] = (undefined2 *)0x3fcb84f8;
  local_54[3] = auStack_64;
  local_54[1] = (undefined2 *)&uStack_60;
  local_54[2] = (undefined2 *)0x3fcb8514;
  ppuVar2 = local_54;
  do {
    puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    (*(code *)&SUB_ram_4001050c)(apuStack_44,puVar3);
  } while (apuStack_44 != ppuVar2);
  pcVar1 = FUN_ram_4039bf9e;
  FUN_ram_40396620(apuStack_44);
  ppuStack_78 = apuStack_44;
  pcStack_74 = pcVar1;
  FUN_ram_4039c11e(auStack_9c,0x3fcb8624,0x10);
  uStack_8d = 0x30;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_8c = 0x78;
  (*(code *)&SUB_ram_4001057c)(pcVar1 + -4,(int)&uStack_8c + 1,0x10);
  FUN_ram_40396620(auStack_9c);
  return;
}

