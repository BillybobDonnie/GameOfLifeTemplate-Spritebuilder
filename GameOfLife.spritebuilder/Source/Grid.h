//
//  Grid.h
//  GameOfLife
//
//  Created by Donald Firth on 2014-10-22.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
    @property (nonatomic, assign) int totalAlive;
    @property (nonatomic, assign) int generation;
@end
