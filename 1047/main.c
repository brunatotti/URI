#include <stdio.h>

int main() {

    int h_start, m_start, h_end, m_end, horas=0, minutos=0;
    scanf("%d %d %d %d", &h_start, &m_start, &h_end, &m_end);

    if (h_end > h_start) {
        if (h_end == h_start + 1 && m_start > m_end){
            horas = 0;
        } else {
            horas = h_end - h_start; }
    } else if (h_start > h_end) {
        horas = 24 - h_start;
        horas += h_end;
    } else {
        horas = 24;
    }

    if (m_end > m_start) {
        minutos = m_end - m_start;
    } else if (m_start > m_end) {
        minutos = 60 - m_start;
        minutos += m_end;
    } else {
        minutos = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}
