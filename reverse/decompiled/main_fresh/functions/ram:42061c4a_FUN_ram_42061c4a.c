
void FUN_ram_42061c4a(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_4 == 0) {
    iVar2 = param_1 * 0x24;
    uVar3 = (uint)(byte)(&DAT_ram_3c0f737c)[iVar2];
    if (uVar3 != param_2) goto LAB_ram_42061c9c;
    if (param_3 == 0) {
      uVar1 = *(undefined4 *)(&DAT_ram_3c0f7380 + iVar2);
      FUN_ram_420487f0(uVar3,uVar1,(&DAT_ram_3c0f7374)[iVar2]);
      FUN_ram_42048852(uVar3,uVar1);
      return;
    }
LAB_ram_42061ca0:
    uVar3 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_2);
    if ((uVar3 & 1) != 0) {
      FUN_ram_42048226(param_2,3);
      (*(code *)&SUB_ram_40010790)(param_2,(&UNK_ram_3c0f736e)[param_1 * 0x24 + param_3],0,0);
      goto LAB_ram_42061ce4;
    }
  }
  else {
LAB_ram_42061c9c:
    if (-1 < (int)param_2) goto LAB_ram_42061ca0;
  }
  FUN_ram_42048226(param_2,1);
LAB_ram_42061ce4:
  if (param_3 == 0) {
    (*(code *)&SUB_ram_4001078c)(param_2,(&DAT_ram_3c0f7374)[param_1 * 0x24],0);
  }
  FUN_ram_42048b12(param_2,1);
  return;
}

