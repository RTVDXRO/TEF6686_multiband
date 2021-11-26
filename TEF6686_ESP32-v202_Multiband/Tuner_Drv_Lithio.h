typedef enum
{ TEF_FM    = 32,
  TEF_AM    = 33,
  TEF_AUDIO = 48,
  TEF_APPL  = 64
} TEF_MODULE;

typedef enum
{ Cmd_Tune_To              =  1,
  Cmd_Set_Bandwidth        = 10,
  Cmd_Set_RFAGC            = 11,
  Cmd_Set_MphSuppression   = 20,
  Cmd_Set_ChannelEqualizer = 22,
  Cmd_Set_NoiseBlanker      = 23,
  Cmd_Set_Deemphasis       = 31,
  Cmd_Set_LevelOffset      = 39,
  Cmd_Set_Highcut_Level    = 52,
  Cmd_Set_Highcut_Noise    = 53,
  Cmd_Set_Highcut_Mph      = 54,
  Cmd_Set_Highcut_Max      = 55,
  Cmd_Set_Stereo_Level     = 62,
  Cmd_Set_Stereo_Noise     = 63,
  Cmd_Set_Stereo_Mph       = 64,
  Cmd_Set_Stereo_Min       = 66,
  Cmd_Set_StHiBlend_Level  = 72,
  Cmd_Set_StHiBlend_Noise  = 73,
  Cmd_Set_StHiBlend_Mph    = 74,
  Cmd_Set_StHiBlend_Max    = 75,
  Cmd_Set_RDS              = 81,
  Cmd_Set_Specials         = 85,
  Cmd_Get_Quality_Status   = 128,
  Cmd_Get_Quality_Data     = 129,
  Cmd_Get_RDS_Status       = 130,
  Cmd_Get_Signal_Status    = 133,
} TEF_RADIO_COMMAND;

typedef enum
{ Cmd_Set_Volume           = 10,
  Cmd_Set_Mute             = 11,
} TEF_AUDIO_COMMAND;

typedef enum
{
  Cmd_Set_OperationMode = 1,
  Cmd_Get_Operation_Status = 128
} TEF_APPL_COMMAND;

bool devTEF_Radio_Set_RDS(void);
bool devTEF_Set_Cmd(TEF_MODULE module, uint8_t cmd, uint16_t len, ...);
bool devTEF_Radio_Tune_To (uint16_t frequency );
bool devTEF_Radio_Tune_AM (uint16_t frequency );
bool devTEF_Radio_Get_Quality_Status (int16_t *level, uint16_t *usn, uint16_t *wam, int16_t *offset, uint16_t *bandwidth, uint16_t *mod);
bool devTEF_Radio_Get_Quality_Status_AM (int16_t *level, uint16_t *noise, uint16_t *cochannel, int16_t *offset, uint16_t *bandwidth, uint16_t *mod);
bool devTEF_APPL_Get_Operation_Status(uint8_t *bootstatus);
bool devTEF_Audio_Set_Mute(uint8_t mode);
bool devTEF_Audio_Set_Volume(int16_t volume);
bool devTEF_Radio_Get_Stereo_Status(uint16_t *status);
bool devTEF_APPL_Set_OperationMode(bool mode);
bool devTEF_Radio_Get_RDS_Data(uint16_t *status, uint16_t *A_block, uint16_t *B_block, uint16_t *C_block, uint16_t *D_block, uint16_t *dec_error);
bool devTEF_Radio_Set_Bandwidth(uint8_t mode, uint16_t bandwidth, uint16_t control_sensitivity, uint16_t low_level_sensitivity);
bool devTEF_Radio_Set_BandwidthAM(uint8_t mode, uint16_t bandwidth, uint16_t control_sensitivity, uint16_t low_level_sensitivity);
bool devTEF_Radio_Set_LevelOffset(int16_t offset);
bool devTEF_Radio_Set_Stereo_Level(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_Stereo_Noise(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_Stereo_Mph(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_Stereo_Min(bool mode);
bool devTEF_Radio_Set_MphSuppression(bool mph);
bool devTEF_Radio_Set_ChannelEqualizer(bool eq);
bool devTEF_Radio_Set_RFAGC(uint16_t agc);
bool devTEF_Radio_Set_Deemphasis(uint16_t timeconstant);
bool devTEF_Radio_Specials(uint16_t audio);
bool devTEF_Radio_Set_Highcut_Max(uint8_t mode, uint16_t limit);
bool devTEF_Radio_Set_Highcut_Level(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_Highcut_Noise(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_Highcut_Mph(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_StHiBlend_Max(uint8_t mode, uint16_t limit);
bool devTEF_Radio_Set_StHiBlend_Level(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_StHiBlend_Noise(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_StHiBlend_Mph(uint8_t mode, uint16_t start, uint16_t slope);
bool devTEF_Radio_Set_NoisBlanker(uint8_t mode, uint16_t start);
