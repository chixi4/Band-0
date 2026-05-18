
void FUN_ram_4206dfce(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  local_20 = *param_2 ^ *param_3;
  uStack_1c = param_2[1] ^ param_3[1];
  uStack_18 = param_2[2] ^ param_3[2];
  uStack_14 = param_2[3] ^ param_3[3];
  FUN_ram_4206debe(&local_20,&uStack_1c,&uStack_18,&uStack_14,&DAT_ram_3c0fa030,&DAT_ram_3c0f9f30,
                   &DAT_ram_3c0f9e30,&DAT_ram_3c0f9d30);
  FUN_ram_4206dd96(&local_20,&uStack_1c,&uStack_18,&uStack_14);
  *param_1 = *param_4 ^ local_20;
  param_1[1] = param_4[1] ^ uStack_1c;
  param_1[2] = param_4[2] ^ uStack_18;
  param_1[3] = param_4[3] ^ uStack_14;
  return;
}

