
void FUN_ram_4202af78(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  local_20 = *param_2 ^ *param_3;
  uStack_1c = param_2[1] ^ param_3[1];
  uStack_18 = param_2[2] ^ param_3[2];
  uStack_14 = param_2[3] ^ param_3[3];
  FUN_ram_4202ae68(&local_20,&uStack_1c,&uStack_18,&uStack_14,0x3c078560,0x3c078460,0x3c078360,
                   0x3c078260);
  FUN_ram_4202ad40(&local_20,&uStack_1c,&uStack_18,&uStack_14);
  *param_1 = *param_4 ^ local_20;
  param_1[1] = param_4[1] ^ uStack_1c;
  param_1[2] = param_4[2] ^ uStack_18;
  param_1[3] = param_4[3] ^ uStack_14;
  return;
}

