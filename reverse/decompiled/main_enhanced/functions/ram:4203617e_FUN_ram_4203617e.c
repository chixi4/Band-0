
bool FUN_ram_4203617e(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *apuStack_b8 [2];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [76];
  
  iVar3 = (int)param_4[1];
  cVar1 = *param_4;
  apuStack_b8[0] = auStack_b0;
  apuStack_b8[1] = auStack_90;
  FUN_ram_420358aa(auStack_b0,param_2,(*(short *)(param_4 + 2) + 7) / 8);
  FUN_ram_420358aa(auStack_70,param_1,iVar3);
  FUN_ram_420358aa(auStack_70 + cVar1 * 4,param_1 + iVar3,iVar3);
  iVar2 = FUN_ram_420357ac(auStack_b0,auStack_b0,auStack_90,param_4);
  FUN_ram_42035778(auStack_70,auStack_70,apuStack_b8[iVar2 == 0],0,
                   (int)((*(ushort *)(param_4 + 2) + 1) * 0x10000) >> 0x10,param_4);
  FUN_ram_4203587a(param_3,iVar3,auStack_70);
  iVar2 = FUN_ram_4203576a(auStack_70,param_4);
  apuStack_b8[0] = (undefined1 *)0x0;
  apuStack_b8[1] = (undefined1 *)0x0;
  (*(code *)&SUB_ram_40010488)(auStack_90,0,0x20);
  (*(code *)&SUB_ram_40010488)(auStack_b0,0,0x20);
  return iVar2 == 0;
}

