//
//  SEOutputController.h
//  Platypus
//
//  Created by Sveinbjorn Thordarson on 7/28/13.
//  Copyright (c) 2013 Sveinbjorn Thordarson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SEOutputController : NSObject
{
    
}

- (void)initialiseInterface;
- (void)prepareInterfaceForExecution;
- (void)cleanupInterface;

@end
