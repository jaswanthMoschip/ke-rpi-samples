
static int file_open_and_write_value(const char*, const char*);
int gpio_export(int);
int gpio_unexport(int gpio_num);
int gpio_set_direction(int gpio_num,const char* dir);
int gpio_set_value(int gpio_num, const char *value);
void gpio_configure_for_display(void);
void spi_configure_for_display(void);
void spi_write_1_byte(uint8_t val);
void display_write_command(uint8_t cmd);
void display_write_data(uint8_t data);
void display_do_reset(void);
void display_turn_on(void);
void display_turn_off(void);
void display_set_contrast(uint8_t contrast);
void display_invert_disable(void) ;
void display_set_page_address(uint8_t address);
void display_set_column_address(uint8_t address);
void display_clear(void);
void display_do_init(void);
void display_write_string(const char* string);

#define     SSD1306_CMD_SET_LOW_COL(column)   (0x00 | (column))
 
#define     SSD1306_CMD_SET_HIGH_COL(column)   (0x10 | (column))
 
#define     SSD1306_CMD_SET_MEMORY_ADDRESSING_MODE   0x20
 
#define     SSD1306_CMD_SET_COLUMN_ADDRESS   0x21
 
#define     SSD1306_CMD_SET_PAGE_ADDRESS   0x22
 
#define     SSD1306_CMD_SET_START_LINE(line)   (0x40 | (line))
 
#define     SSD1306_CMD_SET_CONTRAST_CONTROL_FOR_BANK0   0x81
 
#define     SSD1306_CMD_SET_CHARGE_PUMP_SETTING   0x8D
 
#define     SSD1306_CMD_SET_SEGMENT_RE_MAP_COL0_SEG0   0xA0
 
#define     SSD1306_CMD_SET_SEGMENT_RE_MAP_COL127_SEG0   0xA1
 
#define     SSD1306_CMD_ENTIRE_DISPLAY_AND_GDDRAM_ON   0xA4
 
#define     SSD1306_CMD_ENTIRE_DISPLAY_ON   0xA5
 
#define     SSD1306_CMD_SET_NORMAL_DISPLAY   0xA6
 
#define     SSD1306_CMD_SET_INVERSE_DISPLAY   0xA7
 
#define     SSD1306_CMD_SET_MULTIPLEX_RATIO   0xA8
 
#define     SSD1306_CMD_SET_DISPLAY_ON   0xAF
 
#define     SSD1306_CMD_SET_DISPLAY_OFF   0xAE
 
#define     SSD1306_CMD_SET_PAGE_START_ADDRESS(page)   (0xB0 | (page & 0x07))
 
#define     SSD1306_CMD_SET_COM_OUTPUT_SCAN_UP   0xC0
 
#define     SSD1306_CMD_SET_COM_OUTPUT_SCAN_DOWN   0xC8
 
#define     SSD1306_CMD_SET_DISPLAY_OFFSET   0xD3
 
#define     SSD1306_CMD_SET_DISPLAY_CLOCK_DIVIDE_RATIO   0xD5
 
#define     SSD1306_CMD_SET_PRE_CHARGE_PERIOD   0xD9
 
#define     SSD1306_CMD_SET_COM_PINS   0xDA
 
#define     SSD1306_CMD_SET_VCOMH_DESELECT_LEVEL   0xDB
 
#define     SSD1306_CMD_NOP   0xE3

