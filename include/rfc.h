/*
** EPITECH PROJECT, 2020
** rfc.h
** File description:
** rfc
*/

#ifndef RFC_H_
#define RFC_H_

typedef enum RFC_e
{
    EVENT_LOGGEDIN,
    EVENT_LOGGEDOUT,
    EVENT_MP_RECEIVED,
    EVENT_THREAD_MSG_RECEIVED,
    EVENT_PRINT_USERS,
    EVENT_PRINT_TEAMS,
    EVENT_TEAM_PRINT_CHANNELS,
    EVENT_CHANNEL_PRINT_THREADS,
    EVENT_THREAD_PRINT_REPLIES,
    EVENT_MP_PRINT_MSG,
    ERR_UNKNOWN_TEAM,
    ERR_UNKNOWN_CHANN,
    ERR_UNKNOWN_THREAD,
    EVENT_ERROR_UNKNOWN_USER,
    EVENT_ERROR_UNAUTHORIZED,
    EVENT_ERROR_ALREADY_EXIST,
    EVENT_PRINT_USER,
    EVENT_PRINT_TEAM,
    EVENT_PRINT_CHANNEL,
    EVENT_PRINT_THREAD,
    EVENT_TEAM_CREATED,
    EVENT_CHANNEL_CREATED,
    EVENT_THREAD_CREATED,
    EVENT_PRINT_TEAM_CREATED,
    EVENT_PRINT_CHANNEL_CREATED,
    EVENT_PRINT_THREAD_CREATED,
    EVENT_PRINT_REPLY_CREATED,
    EVENT_PRINT_SUBSCRIBED,
    EVENT_PRINT_UNSUBSCRIBED,
    NO_EVENT
} RFC_e;

#endif /* !RFC_H_ */