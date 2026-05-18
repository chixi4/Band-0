
ushort * FUN_ram_4202244a(undefined4 param_1,int param_2,uint param_3,uint param_4,
                         undefined1 *param_5,char param_6,int *param_7)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [36];
  
  if ((param_4 <= param_3) && (0x17 < param_4)) {
    puVar2 = (ushort *)thunk_FUN_ram_4039047a(param_3 + 0x20);
    if (puVar2 != (ushort *)0x0) {
      FUN_ram_40399daa(puVar2,param_2,param_4);
      puVar4 = (undefined1 *)((int)puVar2 + param_4);
      *puVar2 = *puVar2 | 0x4000;
      *puVar4 = param_5[5];
      uVar1 = param_5[4];
      puVar4[3] = param_6 << 6 | 0x20;
      puVar4[1] = uVar1;
      uVar1 = param_5[3];
      puVar4[2] = 0;
      puVar4[4] = uVar1;
      puVar4[5] = param_5[2];
      puVar4[6] = param_5[1];
      puVar4[7] = *param_5;
      (*(code *)&SUB_ram_40010488)(auStack_50,0,0x1e);
      FUN_ram_42022242(puVar2,puVar4,auStack_50,&uStack_64,auStack_60);
      iVar3 = FUN_ram_42022bd2(param_1,0x10,auStack_60,8,param_4 + 8 + param_2,param_3 - param_4,
                               auStack_50,uStack_64,puVar4 + 8,puVar4 + 8 + (param_3 - param_4));
      if (-1 < iVar3) {
        *param_7 = param_3 + 0x10;
        return puVar2;
      }
      thunk_FUN_ram_40390608(puVar2);
    }
  }
  return (ushort *)0x0;
}

