
int FUN_ram_42099840(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_38 [36];
  
  iVar2 = -1;
  if (0x62 < param_4) {
    bVar1 = *(byte *)(param_3 + 6);
    iVar3 = param_3 + 0x51;
    FUN_ram_4039c11e(auStack_38,iVar3,0x10);
    (*(code *)&SUB_ram_40010488)(iVar3,0,0x10);
    iVar4 = FUN_ram_4209c60a(param_2,*(undefined4 *)(param_2 + 0x58),param_1,bVar1 & 7,param_3,
                             param_4,iVar3);
    iVar2 = -1;
    if (iVar4 == 0) {
      iVar2 = FUN_ram_4039c0e0(auStack_38,iVar3,0x10);
      iVar2 = -(uint)(iVar2 != 0);
    }
    FUN_ram_4039c11e(iVar3,auStack_38,0x10);
  }
  return iVar2;
}

