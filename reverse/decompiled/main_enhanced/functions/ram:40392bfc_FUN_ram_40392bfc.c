
void FUN_ram_40392bfc(uint *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = (*(byte *)((int)param_1 + 0xf) & 1) * 4;
  puVar1 = (uint *)(&DAT_ram_3fcc5264 + iVar4);
  if ((uint *)*puVar1 == (uint *)0x0) {
    param_1[6] = 0;
    *puVar1 = (uint)param_1;
    param_1[7] = (uint)puVar1;
    if (param_2 == 0) {
LAB_ram_40392c22:
      FUN_ram_403919d6(*param_1,param_1[1]);
      return;
    }
  }
  else {
    puVar1 = (uint *)*puVar1;
    do {
      puVar3 = puVar1;
      if ((param_1[1] < puVar3[1]) || ((puVar3[1] == param_1[1] && (*param_1 < *puVar3)))) {
        puVar2 = (undefined4 *)puVar3[7];
        param_1[6] = (uint)puVar3;
        param_1[7] = (uint)puVar2;
        *puVar2 = param_1;
        puVar3[7] = (uint)(param_1 + 6);
        goto LAB_ram_40392c50;
      }
      puVar1 = (uint *)puVar3[6];
    } while ((uint *)puVar3[6] != (uint *)0x0);
    param_1[6] = 0;
    puVar3[6] = (uint)param_1;
    param_1[7] = (uint)(puVar3 + 6);
LAB_ram_40392c50:
    if ((param_2 == 0) && (param_1 == *(uint **)(&DAT_ram_3fcc5264 + iVar4))) goto LAB_ram_40392c22;
  }
  return;
}

