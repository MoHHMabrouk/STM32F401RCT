#include "GPIO_Conf.h"

const GPIO_PIN_MODE_t GPIO_pinStatusArray[PIN_TOTAL] = {
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA2     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA0     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA1     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA3     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA4     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA5     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA6     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA7     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA8     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA9     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA10    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA11    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA12    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA13    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA14    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINA15    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB0     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB1     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB2     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB3     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB4     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB6     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB7     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB8     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB9     */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB10    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB11    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB12    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB13    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB14    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINB15    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINC13    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN}, /*     PINC14    */
	{.MODER=MODER_OUTPUT,.OSPEEDER=OSPEEDER_LOW_SPEED,.OTYPER=OTYPER_OUTPUT_PUSH_PULL,.PUPDR=PUPDR_NO_PULL_UP_PULL_DOWN} /*     PINC15    */
};