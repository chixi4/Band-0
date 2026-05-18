
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202dc56(undefined4 param_1,undefined2 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  char cVar6;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  thunk_FUN_ram_4202b7dc();
  iVar3 = FUN_ram_4203158a(param_1,5,&iStack_24,auStack_28);
  if (iVar3 == 0) {
    bVar1 = *(byte *)(iStack_24 + 0x34);
    thunk_FUN_ram_4202b7f6();
    if ((bVar1 & 1) == 0) {
      piVar2 = (int *)(*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6b9c + 4);
      if (piVar2 != (int *)0x0) {
        (*(code *)&SUB_ram_40010488)(piVar2,0,0x14);
        cVar6 = *(char *)(_DAT_ram_3fcb6b9c + 0x28) + '\x01';
        if (*(char *)(_DAT_ram_3fcb6b9c + 0x28) == -1) {
          cVar6 = '\x01';
        }
        *(char *)(_DAT_ram_3fcb6b9c + 0x28) = cVar6;
        *(char *)((int)piVar2 + 0xb) = cVar6;
        *(short *)(piVar2 + 2) = (short)param_1;
        piVar2[3] = param_3;
        piVar2[4] = param_4;
        puVar4 = (undefined1 *)FUN_ram_4203698e(0x12,cVar6,8,&uStack_2c);
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = *(undefined1 *)param_2;
          puVar4[1] = (char)((ushort)*param_2 >> 8);
          puVar4[2] = *(undefined1 *)(param_2 + 1);
          puVar4[3] = (char)((ushort)param_2[1] >> 8);
          puVar4[4] = *(undefined1 *)(param_2 + 2);
          puVar4[5] = (char)((ushort)param_2[2] >> 8);
          puVar4[6] = *(undefined1 *)(param_2 + 3);
          puVar4[7] = (char)((ushort)param_2[3] >> 8);
          iVar3 = FUN_ram_42036924(param_1,uStack_2c);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 0x84))();
            iVar5 = (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(30000);
            piVar2[1] = iVar5 + iVar3;
            FUN_ram_4202bac4();
            thunk_FUN_ram_4202b7dc();
            iVar3 = _DAT_ram_3fcb6b9c;
            iVar5 = *(int *)(_DAT_ram_3fcb6b9c + 0x20);
            *piVar2 = iVar5;
            if (iVar5 == 0) {
              *(int **)(iVar3 + 0x24) = piVar2;
            }
            *(int **)(iVar3 + 0x20) = piVar2;
            thunk_FUN_ram_4202b7f6();
            return 0;
          }
          goto LAB_ram_4202dc8a;
        }
      }
      iVar3 = 6;
      goto LAB_ram_4202dc8a;
    }
    iVar3 = 3;
  }
  else {
    thunk_FUN_ram_4202b7f6();
  }
  piVar2 = (int *)0x0;
LAB_ram_4202dc8a:
  FUN_ram_4202da9a(piVar2);
  return iVar3;
}

