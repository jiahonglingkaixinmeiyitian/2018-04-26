//
//  AppDelegate.h
//  20180426
//
//  Created by heartjhl on 2018/4/26.
//  Copyright © 2018年 heartjhl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

