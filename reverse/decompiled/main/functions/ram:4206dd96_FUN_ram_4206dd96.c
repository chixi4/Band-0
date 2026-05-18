
void FUN_ram_4206dd96(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar4 = *param_4 << 0x10 | *param_4 >> 0x10;
  *param_4 = (*param_3 & 0xff00ff) << 8 | *param_3 >> 8 & 0xff00ff;
  uVar1 = uVar4 >> 8 & 0xff00ff | (uVar4 & 0xff00ff) << 8;
  *param_3 = uVar1;
  uVar5 = *param_4;
  uVar3 = *param_2;
  uVar6 = uVar3 << 0x10 | uVar3 >> 0x10;
  uVar1 = ((uVar5 ^ uVar2) >> 8 & 0xff00ff | ((uVar5 ^ uVar2) & 0xff00ff) << 8) ^ uVar1 ^ uVar6;
  uVar4 = (uVar5 >> 0x10 | uVar5 << 0x10) ^ uVar4;
  uVar2 = *param_1;
  *param_2 = uVar3 ^ uVar4 ^ uVar1;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x10) ^ uVar1;
  *param_1 = ((uVar4 & 0xff00ff) << 8 | uVar4 >> 8 & 0xff00ff) ^ *param_1;
  uVar4 = uVar1 << 0x10 | uVar1 >> 0x10;
  uVar6 = (uVar2 >> 8 & 0xff00ff | (uVar2 & 0xff00ff) << 8) ^ uVar6;
  *param_4 = (uVar4 >> 8 & 0xff00ff | (uVar4 & 0xff00ff) << 8) ^ uVar6 ^ *param_4;
  uVar1 = uVar6 << 0x10 | uVar6 >> 0x10;
  *param_3 = uVar4 ^ *param_3 ^ ((uVar1 & 0xff00ff) << 8 | uVar1 >> 8 & 0xff00ff);
  return;
}

