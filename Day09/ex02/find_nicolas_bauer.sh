# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 14:01:13 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/17 14:01:15 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cat $1 | grep -i "nicolas	bauer" | awk -F'\t' '{print$4}'  | awk -F'[^0-9]*' '$2'
